/**
Purpose: This header file is meant to declare all functions that make up this lab's content.
		 
@author Steven Husar
@version 1.0 2/13/2019
*/

#ifndef POINTERARRAY_H
#define POINTERARRAY_H
/**
Purpose: This class is meant to create a dymanic array
		 
@author Steven Husar
@version 1.0 2/13/2019
*/

int * create_array (int data_size)
{
  int * address;
  address = new int[data_size];
  return (address);
}

/**
Purpose: This class is meant to display all content for a given array
		 
@author Steven Husar
@version 1.0 2/13/2019
*/
void display_data_array (int *f_dynamic_array, int data_size)
{
  for (int i = 0; i < data_size; i++) {

      cout << "Field " << i+1 << " : " << *(f_dynamic_array + i) <<endl;

   }
}

/**
Purpose: This class is meant to prompt the user for data to fit inside of the initial array

Unfortunately this class does not prevent any support to avoid any non-integer numbers being validated (I ran into too many errors before submitting this).
		 
@author Steven Husar
@version 1.0 2/13/2019
*/

void initial_data_array (int *f_dynamic_array, int data_size)
{
  for (int i = 0; i < data_size; i++) {
    do 
    {
      cout << "Enter a number into the array field " << i+1 << " :";
      cin >> *(f_dynamic_array + i);
    } while( (*f_dynamic_array + i) <= 0);
   }
}



/**
Purpose: This class is meant to allocate double the space in memory 
		 
@author Steven Husar
@version 1.0 2/13/2019
*/
void second_data_array (int *f_dynamic_array, int *f_second_dynamic_array, int data_size, int data_size_2)
{
  for (int i = 0; i < data_size; i++) {

      f_second_dynamic_array[i] = f_dynamic_array[i];
      //f_dynamic_array++;
      
 }
}

#endif
