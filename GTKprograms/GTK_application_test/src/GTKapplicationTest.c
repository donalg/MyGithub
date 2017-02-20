#include "gtk/gtk.h"

#define COL 5
#define ROW 5

int count = 0;

GtkWidget *make_box(gboolean homogeneous, gint spacing, gboolean expand, gboolean fill, guint padding)
{
	// Variables: 
	GtkWidget *vertBox;
	GtkWidget *box_button;
	GtkWidget *box_label;
	char padstr[80];

	// Variable Definitions:
	vertBox = gtk_box_new(GTK_ORIENTATION_VERTICAL, spacing);
	box_label = gtk_label_new("Box Label");
	box_button = gtk_button_new_with_label("Click Me!");

	// Initialising Widgets: 
	gtk_box_pack_start(GTK_BOX(vertBox), box_label, expand, fill, padding);
	//gtk_widget_show(box_label);

	gtk_box_pack_start(GTK_BOX(vertBox), box_button, expand, fill, padding);
	//gtk_widget_show(box_button);

}

void update_button(GtkWidget* buttonIn, gpointer user_data)
{
	/////////////////////////////////////////////////////////
	// Fuction for updateing the number of clicks:
	/////////////////////////////////////////////////////////

	//printf("%d \n", count);

	char buff[100];
	sprintf(buff, "Click Count: %d", ++count);
	gtk_button_set_label(GTK_BUTTON(buttonIn), buff);
	
}


void GTK_initalise_func(int argc, char* argv[]) 
{
	// Initialise the GTK window:
	gtk_init(&argc, &argv);

	GtkWidget *window; // *box1, *box2;
	GtkWidget *label; // *seperator; 
	GtkWidget *table;
	GtkWidget *button;
	GtkWidget *closeButton;

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	label = gtk_label_new("Click as much as you like!");
	//box1 = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 5);
	//box2 = make_box(FALSE, 0, FALSE, FALSE, 5);
	table = gtk_table_new(COL, ROW, TRUE);
	//seperator = gtk_separator_new();
	button = gtk_button_new_with_label("Click Count: 0");
	closeButton = gtk_button_new_with_label("EXIT");

	gtk_window_set_position(GTK_WINDOW(window),GTK_WIN_POS_CENTER);
	//gtk_window_set_default_size(GTK_WINDOW(window),600,600);
	gtk_container_set_border_width(GTK_CONTAINER(window), 5);
	gtk_container_add(GTK_CONTAINER(window), table);

	gtk_table_attach_defaults(GTK_CONTAINER(table), label, 0,1,0,1);
	gtk_table_attach_defaults(GTK_CONTAINER(table), button, 0,4,1,4);
	gtk_table_attach_defaults(GTK_CONTAINER(table), closeButton, 4,5,1,4);

	//gtk_box_pack_start(GTK_BOX(box1), label, FALSE, FALSE, 0);
	//gtk_box_pack_start(GTK_BOX(box1), seperator, FALSE, FALSE, 5);
	//gtk_box_pack_start(GTK_BOX(box1), GTK_WIDGET(box2), FALSE, FALSE, 0);

	//gtk_widget_show(label);
	//gtk_widget_show(box2);

	//gtk_misc_set_allignment(GTK_MISC(label), 0, 0);
	//gtk_container_add(GTK_CONTAINER(window), box2);


	g_signal_connect(window, "delete-event", G_CALLBACK(gtk_main_quit), NULL);
	g_signal_connect(closeButton, "pressed", G_CALLBACK(gtk_main_quit), NULL);
	g_signal_connect(button, "pressed", G_CALLBACK(update_button), NULL);
	gtk_widget_show_all(window);
	gtk_main();

}


int main(int argc, char* argv[]) 
{
	GTK_initalise_func(argc, argv);	 
	return 0;
}