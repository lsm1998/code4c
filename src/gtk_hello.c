//
// Created by lsm on 2021/2/20.
//
#include <gtk/gtk.h>

static void PrintHello(GtkWidget *widget, gpointer data)
{
    g_print("hello world! \n");
}

static void activate(GtkApplication *app, gpointer user_data)
{
    GtkWidget *window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "你好");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 200);

    GtkButtonBox *button_box = gtk_button_box_new(GTK_ORIENTATION_HORIZONTAL);
    gtk_container_add(GTK_CONTAINER(window), button_box);
    GtkButton *button = gtk_button_new_with_label("求点击");
    gtk_container_add(GTK_CONTAINER(button_box), button);

    GtkButton *close = gtk_button_new_with_label("关闭");
    gtk_container_add(GTK_CONTAINER(button_box), close);


    g_signal_connect(button, "clicked", G_CALLBACK(PrintHello), NULL);
    g_signal_connect_swapped(close, "clicked", G_CALLBACK(gtk_window_close), window);

    gtk_widget_show_all(window);
}

int main(int argc, char **argv)
{
    GtkApplication *app = gtk_application_new("com.lsm1998", G_APPLICATION_FLAGS_NONE);
    // 激活事件
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    int status = g_application_run(app, argc, argv);
    g_object_unref(app);
    return status;
}
