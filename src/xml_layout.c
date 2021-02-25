/**
* 作者：刘时明
* 时间：2021/2/23 0023
*/
//
// Created by Administrator on 2021/2/23 0023.
//
#include <gtk/gtk.h>
#include <stdio.h>

static void PrintHello(GtkWidget *widget, gpointer data)
{
    printf("hello %s! \n", (const char *) data);
}

int main(int argc, char **argv)
{
    GError *error = NULL;
    gtk_init(&argc, &argv);

    GtkBuilder *builder = gtk_builder_new();

    if (gtk_builder_add_from_file(builder, "builder.ui", &error) == 0)
    {
        g_printerr("error load file:%s\n", error->message);
        g_clear_error(&error);
        return 1;
    }

    GObject *window = gtk_builder_get_object(builder, "window");

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    GObject *button1 = gtk_builder_get_object(builder, "button1");
    g_signal_connect(button1, "clicked", G_CALLBACK(PrintHello), "button1");

    GObject *button2 = gtk_builder_get_object(builder, "button2");
    g_signal_connect(button2, "clicked", G_CALLBACK(PrintHello), "button2");

    GObject *quit = gtk_builder_get_object(builder, "quit");
    g_signal_connect(quit, "clicked", G_CALLBACK(gtk_main_quit), NULL);

    g_object_unref(builder);
    gtk_main();
    return 1;
}