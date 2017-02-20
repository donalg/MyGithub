#include <gtk/gtk.h>
#include <string.h>

int *user_data = 0;
int count = 0;

int update_button(GtkWidget* buttonIn, gpointer user_data)
{
	/////////////////////////////////////////////////////////
	// Fuction for updateing the number of clicks:
	/////////////////////////////////////////////////////////

	//printf("%d \n", count);

	char buff[100];
	sprintf(buff, "Clicks : %d", ++count);
	gtk_button_set_label(GTK_BUTTON(buttonIn), buff);
	
}



int main (int argc, char* argv[])
{
	/////////////////////////////////////////////////////////
	// Main function where gui is created: 
	/////////////////////////////////////////////////////////
	gtk_init(&argc, &argv);

	GtkWidget *window, *button;
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	button = gtk_button_new();
	gtk_button_set_label(GTK_BUTTON(button), "Clicks : 0");

	gtk_container_add(GTK_CONTAINER(window), button);

	g_signal_connect(window, "delete-event", G_CALLBACK(gtk_main_quit), NULL);
	g_signal_connect(button, "pressed", G_CALLBACK(update_button), NULL);

	gtk_window_set_position(GTK_WINDOW(window),GTK_WIN_POS_CENTER);
	gtk_window_set_default_size(GTK_WINDOW(window),500,500);
	gtk_window_set_title(GTK_WINDOW(window),"Test Signals with button press : Program");
	gtk_widget_show_all(window);

	gtk_main();

	return 0;
}