#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int get_minimum_coins(int money);

/**
 * main - Calculate the minimum number of coins to make change.
 * @argc: Number of arguments.
 * @argv: Amount of money in singles.
 *
 * Return: 0 (success), 1 (failure)
 */
int main(int argc, char *argv[])
{
	int money, change;

	money = change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	change = get_minimum_coins(money);

	printf("%d\n", change);
	return (0);
}

/**
 * get_minimum_coins - Calculate the minimum number of coins to make change.
 * @money: Amount of money in singles.
 *
 * Return: Minimum number of coins (int)
 */
int get_minimum_coins(int money)
{
	int one, two, five, ten, twenty_five, sum;

	sum = one = two = five = ten = twenty_five = 0;

	if (money <= 0)
	{
		return (0);
	}

	if (money >= 25)
	{
		twenty_five = money / 25;
		money -= twenty_five * 25;
	}

	if (money < 25 && money >= 10)
	{
		ten = money / 10;
		money -= ten * 10;
	}

	if (money < 10 && money >= 5)
	{
		five = money / 5;
		money -= five * 5;
	}
	if (money < 5 && money >= 2)
		two = money / 2;
	money -= two * 2;
	if (money < 2)
		one = money;

	sum = twenty_five + ten + five + two + one;
	return (sum);
}

