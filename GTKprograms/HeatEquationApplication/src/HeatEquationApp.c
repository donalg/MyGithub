#include <gtk/gtk.h>
#include <GL/gl.h>
#include <GL/glut.h>

#define COL 100
#define ROW 100

int count = 0;
int win_height = 300;
int win_width = 400;

struct Plane2D {
	int height;
	int width;
	double **points;

};





void PrintPlate(struct Plane2D _plate)
{
	printf("\n");
	for (int i = 0; i < _plate.height; i++)
		{

			for (int j = 0; j < _plate.width; j++)
			{
				printf("%.5f \t", _plate.points[i][j]);
			}
			printf("\n");
		}
}


struct Plane2D InitPlate(struct Plane2D _plate)
{
	_plate.points =  malloc((_plate.height)*sizeof(double **));
	for (int i = 0; i < _plate.height; i++)
	{
		_plate.points[i] = (double *) calloc(_plate.width, sizeof(double));	
	}
	PrintPlate(_plate);
	return _plate;
}

struct Plane2D BoundaryConditions(struct Plane2D _plate)
{
	for (int i = 0; i < _plate.width; i++)
	{
		_plate.points[0][i] = 100;
		_plate.points[_plate.height -1][i] = 100;
	}
	for (int j = 0; j < _plate.width; j++)
	{
		_plate.points[j][0] = 100;
		_plate.points[j][_plate.height -1] = 100;
	}
	PrintPlate(_plate);
	return _plate;
}

struct Plane2D plateCopy(struct Plane2D _plateNEW, struct Plane2D _plateOLD)
{
	_plateNEW.height = _plateOLD.height;
	_plateNEW.width = _plateOLD.width;
	//_plateNEW = InitPlate(_plateNEW);
		for (int i = 0; i < (_plateOLD.height); i++)
		{
			for (int j = 0; j < (_plateOLD.width); j++)
			{
					_plateNEW.points[i][j] = _plateOLD.points[i][j];
			}
		}
		return _plateNEW;
}

void simulationLoop(float time_end, float time_step, struct Plane2D _plate)
{
	// This function will run the simulation until it reaches the finial time
	

		float current_time = 0;
		struct Plane2D _plate_iterate;
		_plate_iterate = InitPlate(_plate_iterate);
		_plate_iterate = plateCopy(_plate_iterate, _plate);
		while (current_time < time_end)
		{
			_plate_iterate = _plate;
			for (int i = 1; i < (_plate.height -1); i++)
			{
				for (int j = 1; j < (_plate.width -1); j++)
				{

					_plate_iterate.points[i][j] = 2;//  (1/3)*(_plate.points[i -1][j] + _plate.points[i][j] + 
													//_plate.points[i +1][j] + _plate.points[i][j-1] + 
													//_plate.points[i][j+1]);

					printf("%0.5f \n", _plate_iterate.points[i][j]);
				}

			}

			_plate = plateCopy(_plate, _plate_iterate);
			PrintPlate(_plate);

			printf("Plate Displated\n");
			current_time += time_step;
		}
	
		


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
	GtkWidget *image;



	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	label = gtk_label_new("Click as much as you like!");
	//box1 = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 5);
	//box2 = make_box(FALSE, 0, FALSE, FALSE, 5);
	table = gtk_table_new(COL, ROW, TRUE);
	//seperator = gtk_separator_new();
	button = gtk_button_new_with_label("Click Count: 0");
	closeButton = gtk_button_new_with_label("EXIT");
	image = gtk_image_new_from_file("../resources/Pic.png");

	gtk_window_set_position(GTK_WINDOW(window),GTK_WIN_POS_CENTER);
	//gtk_window_set_default_size(GTK_WINDOW(window),600,600);
	gtk_container_set_border_width(GTK_CONTAINER(window), 0 );
	gtk_container_add(GTK_CONTAINER(window), table);

	gtk_table_attach_defaults(GTK_CONTAINER(table), label, 0,20,0,10);
	gtk_table_attach_defaults(GTK_CONTAINER(table), button, 0,10,10,20);
	gtk_table_attach_defaults(GTK_CONTAINER(table), closeButton, 10,20,10,20);
	gtk_table_attach_defaults(GTK_CONTAINER(table), image, 20,COL,0,ROW);

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
	struct Plane2D plate; 
	plate.height = 10;
	plate.width = 10;



	plate = InitPlate(plate);
	PrintPlate(plate);
	plate = BoundaryConditions(plate);
	simulationLoop(10, 1, plate);
	//PrintPlate(plate);
	//printf("final plate:\n");
	//PrintPlate(plate);



	//GTK_initalise_func(argc, argv);	 
	return 0;
}