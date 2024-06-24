/**
 * swap_int - switches value of the first input wiht the value of the sceond input.
 * @a: First value to swap
 * @b Second value to swap
 */
void swap_int(int *a, int *b)
{
	int temp:

	temp = *a;
	*a = *b;
	*b = temp;
}
