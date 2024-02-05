#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>

#include <errno.h>

void on_button_clicked(GtkWidget *widget, gpointer data)
{
    // Run the Node Info CLI app and capture its output
    FILE *fp;
    char buffer[128];
    char result[1024] = "";

    fp = popen("/path/to/your/node_info_cli_app", "r");
    if (fp == NULL) {
        g_printerr("Failed to run Node Info CLI app: %s\n", strerror(errno));
        return;
    }

    // Read the output and concatenate it to the result string
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        strcat(result, buffer);
    }

    // Close the file stream
    int status = pclose(fp);

    // Check if there was an error closing the file stream
    if (status == -1) {
        g_printerr("Error closing file stream: %s\n", strerror(errno));
    }

    // Print the exit status of the process for further debugging
    if (WIFEXITED(status)) {
        g_print("Node Info CLI app exited with status: %d\n", WEXITSTATUS(status));
    } else {
        g_print("Node Info CLI app did not exit normally\n");
    }

    // Print the result to the console for debugging
    g_print("Node Info Output:\n%s\n", result);

    // Create a new window to display the result
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Node Info");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);

    // Create a text view to display the result
    GtkWidget *text_view = gtk_text_view_new();
    GtkTextBuffer *text_buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(text_view));
    gtk_text_buffer_set_text(text_buffer, result, -1);

    // Create a scroll window for the text view
    GtkWidget *scrolled_window = gtk_scrolled_window_new(NULL, NULL);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scrolled_window),
                                   GTK_POLICY_AUTOMATIC,
                                   GTK_POLICY_AUTOMATIC);
    gtk_container_add(GTK_CONTAINER(scrolled_window), text_view);

    // Create a vertical box to organize the widgets
    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_box_pack_start(GTK_BOX(vbox), scrolled_window, TRUE, TRUE, 0);

    // Set the vbox as the main container of the window
    gtk_container_add(GTK_CONTAINER(window), vbox);

    // Show all widgets
    gtk_widget_show_all(window);
}






int main(int argc, char *argv[])
{
    // Initialize GTK
    gtk_init(&argc, &argv);

    // Create the main window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "GTK Node Info App");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);

    // Create a button
    GtkWidget *button = gtk_button_new_with_label("Get Node Info");

    // Connect the button click event to the callback function
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), NULL);

    // Create a vertical box to organize the widgets
    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_box_pack_start(GTK_BOX(vbox), button, TRUE, TRUE, 0);

    // Set the vbox as the main container of the window
    gtk_container_add(GTK_CONTAINER(window), vbox);

    // Connect the destroy event of the window to gtk_main_quit
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Show all widgets
    gtk_widget_show_all(window);

    // Start the GTK main loop
    gtk_main();

    return 0;
}

