#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
using namespace std;
void main()
{

	system("cls");
	char cho;
	static int  sys, x, y, p1, i, j, k, rw, toss, rl, lvl, sw, x1, y1, x2, y2, x3, y3, a[3][3], ctr, gw, ch;
	cout << "\n\t\t\t\t!!!WELCOME!!!";
	cout << "\n\n\nWe know that you know how to play the game :p\n\n";
	cout << "Modes:";
	cout << "\n1.Single Player\n2.Double Player\n3.Exit\n\nEnter your choice: ";
	cin >> ch;
	switch (ch)
	{
	case 1: {

		do {
			system("cls");
			cout << "\t\t\t    ---SINGLE PLAYER MODE---";
			cout << "\n\nChoose your symbol (use their respective number:\n1.O\n2.X\n\nEnter your choice:";
			cin >> p1;
		} while (p1 > 2 || p1 < 1);
		if (p1 == 1)
		{
			sys = 2;
		}
		else
		{
			sys = 1;
		}
		system("cls");
		cout << "\t\t\t     ---SINGLE PLAYER MODE---";
		cout << "\n\n\nDo You Want To Start the game? (Y/N): ";
		cin >> cho;
		if (cho == 'y' || cho == 'Y')
		{
			toss = 1;
		}
		else
		{
			toss = 0;
		}
		cout << "\n\nPLEASE WAIT";
		for (k = 0; k < 10; k++)
		{
			cout << " .";
			Sleep(150);
		}
		/*toss = rand() % (2);
		if (toss)
		{
		cout << "\n\n\t\t\tYou will start the game";
		}
		else
		{
		cout << "\n\n\t\t\tSystem will start the game";
		}
		_getch();*/
		do {
			system("cls");
			cout << "\t\t\t     ---SINGLE PLAYER MODE---";
			cout << "\n\n\nLevel of the game:\n\n1.Easy\n2.Medium\n3.Hard\n4.Impossible\n\nEnter your choice:";
			cin >> lvl;
		} while (lvl > 4 || lvl < 1);
		if (lvl == 1)
		{
			lvl--;
		}
		lvl = 5 - lvl;
		cout << "\n\nPATIENCE ALWAYS WIN";
		for (j = 0; j < 10; j++)
		{
			cout << " .";
			Sleep(150);
		}
		do {
			for (int i = 0; i < 3; i++)
				for (int j = 0; j < 3; j++)
					a[i][j] = 0;
			do {
				srand((unsigned)time(NULL));
				system("cls");
				cout << "\t\t\t    ---SINGLE PLAYER---\n\n\n\n\n";
				ctr++;
				for (i = 0; i < 3; i++)
				{
					cout << "\t\t\t\t ";
					for (k = 0; k < 3; k++)
					{
						if (a[i][k] == 0)
						{
							cout << (i) * 3 + (k + 1);
						}
						else
						{
							if (a[i][k] == 1)
							{
								cout << "O";
							}
							else
							{
								cout << "X";
							}
						}
						if (k < 2)
						{
							cout << " | ";
						}
					}
					cout << "\n";
					if (i < 2)
					{
						cout << "\t\t\t\t";
						for (j = 0; j < 11; j++)
						{
							cout << "-";
						}
						cout << "\n";

					}
				}
				sw = 0;
				if (ctr % 2 == toss && ctr != 10)
				{
					cout << "\n\n\n\t\t\t\tYou:";
					if (p1 == 1)
					{
						cout << " O";
					}
					else
					{
						cout << " X";
					}
					int input;
					cout << "\n\n\t\t\t\tColumn:";
					cin >> input;
					input--;
					y = input / 3;
					x = input % 3;
					if (ctr == 1)
					{
						x3 = x;
						y3 = y;
					}
					y2 = y;
					x2 = x;
					if (a[y][x] || x > 2 || y > 2 || x < 0 || y < 0)
					{
						rw = 0;
					}
					else
					{
						a[y][x] = p1;
						rw = 1;
					}
					if (!(rw))
					{
						cout << "\n \n \t \t \t \tInvalid Move!!!\n\n\t\t\t\tEnter your choice again!!!";
						ctr--;
						_getch();
					}
				}
				else
				{
					if (ctr != 10)
					{
						rl = rand() % (21) + 1;
						cout << "\n\n\n\t\t\t\tSystem:";
						if (sys == 1)
						{
							cout << " O";
						}
						else
						{
							cout << " X";
						}
						if (rl%lvl == 0)
						{
							for (k = 0; k < 3; k++)
							{
								if (a[k][0] == sys && a[k][1] == sys && a[k][2] == 0)
								{
									x = 2;
									y = k;
									sw = 1;
									if (rand() % (2))
										break;
								}
								if (a[k][1] == sys && a[k][2] == sys && a[k][0] == 0)
								{
									x = 0;
									y = k;
									sw = 1;
									if (rand() % (2))
										break;
								}
								if (a[k][0] == sys && a[k][2] == sys && a[k][1] == 0)
								{
									x = 1;
									y = k;
									sw = 1;
									if (rand() % (2))
										break;
								}
								if (a[0][k] == sys && a[1][k] == sys && a[2][k] == 0)
								{
									x = k;
									y = 2;
									sw = 1;
									if (rand() % (2))
										break;
								}
								if (a[1][k] == sys && a[2][k] == sys && a[0][k] == 0)
								{
									x = k;
									y = 0;
									sw = 1;
									if (rand() % (2))
										break;
								}
								if (a[2][k] == sys && a[0][k] == sys && a[1][k] == 0)
								{
									x = k;
									y = 1;
									sw = 1;
									if (rand() % (2))
										break;
								}

							}
							if (a[0][0] == sys && a[1][1] == sys && a[2][2] == 0)
							{
								x = 2;
								y = 2;
								sw = 1;
							}
							if (a[2][2] == sys && a[1][1] == sys && a[0][0] == 0)
							{
								x = 0;
								y = 0;
								sw = 1;
							}
							if (a[0][0] == sys && a[2][2] == sys && a[1][1] == 0)
							{
								x = 1;
								y = 1;
								sw = 1;
							}
							if (a[0][2] == sys && a[1][1] == sys && a[2][0] == 0)
							{
								x = 0;
								y = 2;
								sw = 1;
							}
							if (a[2][0] == sys && a[1][1] == sys && a[0][2] == 0)
							{
								x = 2;
								y = 0;
								sw = 1;
							}
							if (a[2][0] == sys && a[0][2] == sys && a[1][1] == 0)
							{
								x = 1;
								y = 1;
								sw = 1;
							}
							if (sw == 0)
							{
								for (k = 0; k < 3; k++)
								{
									if (a[k][0] == p1 && a[k][1] == p1 && a[k][2] == 0)
									{
										x = 2;
										y = k;
										if (rand() % (2))
											break;
									}
									if (a[k][1] == p1 && a[k][2] == p1 && a[k][0] == 0)
									{
										x = 0;
										y = k;
										if (rand() % (2))
											break;
									}
									if (a[k][0] == p1 && a[k][2] == p1 && a[k][1] == 0)
									{
										x = 1;
										y = k;
										if (rand() % (2))
											break;
									}
									if (a[0][k] == p1 && a[1][k] == p1 && a[2][k] == 0)
									{
										x = k;
										y = 2;
										if (rand() % (2))
											break;
									}
									if (a[1][k] == p1 && a[2][k] == p1 && a[0][k] == 0)
									{
										x = k;
										y = 0;
										if (rand() % (2))
											break;
									}
									if (a[2][k] == p1 && a[0][k] == p1 && a[1][k] == 0)
									{
										x = k;
										y = 1;
										if (rand() % (2))
											break;
									}
								}
								if (a[0][0] == p1 && a[1][1] == p1 && a[2][2] == 0)
								{
									x = 2;
									y = 2;
								}
								if (a[2][2] == p1 && a[1][1] == p1 && a[0][0] == 0)
								{
									x = 0;
									y = 0;
								}
								if (a[0][0] == p1 && a[2][2] == p1 && a[1][1] == 0)
								{
									x = 1;
									y = 1;
								}
								if (a[0][2] == p1 && a[1][1] == p1 && a[2][0] == 0)
								{
									x = 0;
									y = 2;
								}
								if (a[2][0] == p1 && a[1][1] == p1 && a[0][2] == 0)
								{
									x = 2;
									y = 0;
								}
								if (a[2][0] == p1 && a[0][2] == p1 && a[1][1] == 0)
								{
									x = 1;
									y = 1;
								}
								if (a[y][x] || ctr == 1)
								{
									if (toss == 0)
									{
										if (ctr == 1)
										{
											x = 1;
											y = 1;

										}
										else
										{
											if (ctr == 3)
											{
												if (y == 1)
												{
													y = 2 - x;
													x = 2 - x;
												}
												else
												{
													if (x == 1)
													{
														y = 2 - y;
														x = 2 - y;

													}
													else
													{
														if (x == y)
														{
															x = 2 - x;
															y = 2 - y;
															x1 = x;
															y1 = y;

														}
														else
														{
															y = y + x;
															x = y - x;
															y = y - x;
															x1 = x;
															y1 = y;

														}
													}
												}
											}
											else
											{
												if (ctr == 5)
												{
													if (x == x1)
													{
														y = y1;
														x = 2 - x1;
													}
													else
													{
														if (y == y1)
														{
															y = 2 - y1;
															x = x1;
														}
													}
												}
											}
										}
									}
									else
									{
										if (ctr == 2)
										{
											if (!(a[1][1]))
											{
												x = x1 = 1;
												y = y1 = 1;
											}
											else
											{
												x = y = y1 = x1 = 0;
											}
										}
										else
										{
											if (ctr == 4)
											{
												if (x1 == 0 && y1 == 0)
												{
													x = 2;
													y = 0;

												}
												else
												{
													if ((x == y3 && y == x3) || (x3 == y3 && x == y))
													{

														if (y > y3)
														{
															y--;
														}
														else
														{
															y = y3 - 1;
														}
														x = x;
													}
												}
											}
										}


										if (a[y][x])
										{
											for (int i = 0; i < 3; i++)
											{
												for (int j = 0; j < 3; j++)
												{
													for (int k = 0; k < 3; k++)
													{
														for (int h = 0; h < 3; h++)
														{
															if (k == 0)
															{
																if (h == 0)
																{
																	if (a[k][j] == p1 && a[i][0] == p1 && a[i][j] == 0 && a[i][1] == 0 && a[i][2] == 0 && a[1][j] == 0 && a[2][j] == 0)
																	{
																		x = j;
																		y = i;
																		sw = 1;
																	}
																}
																if (h == 1)
																{
																	if (a[k][j] == p1 && a[i][1] == p1 && a[i][j] == 0 && a[i][0] == 0 && a[i][2] == 0 && a[1][j] == 0 && a[2][j] == 0)
																	{
																		x = j;
																		y = i;
																		sw = 1;
																	}
																}
																if (h == 2)
																{
																	if (a[k][j] == p1 && a[i][2] == p1 && a[i][j] == 0 && a[i][1] == 0 && a[i][0] == 0 && a[1][j] == 0 && a[2][j] == 0)
																	{
																		x = j;
																		y = i;
																		sw = 1;
																	}
																}
															}
															if (k == 1)
															{
																if (h == 0)
																{
																	if (a[k][j] == p1 && a[i][0] == p1 && a[i][j] == 0 && a[i][1] == 0 && a[i][2] == 0 && a[0][j] == 0 && a[2][j] == 0)
																	{
																		x = j;
																		y = i;
																		sw = 1;
																	}
																}
																if (h == 1)
																{
																	if (a[k][j] == p1 && a[i][1] == p1 && a[i][j] == 0 && a[i][0] == 0 && a[i][2] == 0 && a[0][j] == 0 && a[2][j] == 0)
																	{
																		x = j;
																		y = i;
																		sw = 1;
																	}
																}
																if (h == 2)
																{
																	if (a[k][j] == p1 && a[i][2] == p1 && a[i][j] == 0 && a[i][1] == 0 && a[i][0] == 0 && a[0][j] == 0 && a[2][j] == 0)
																	{
																		x = j;
																		y = i;
																		sw = 1;
																	}
																}
															}
															if (k == 2)
															{
																if (h == 0)
																{
																	if (a[k][j] == p1 && a[i][0] == p1 && a[i][j] == 0 && a[i][1] == 0 && a[i][2] == 0 && a[1][j] == 0 && a[0][j] == 0)
																	{
																		x = j;
																		y = i;
																		sw = 1;
																	}
																}
																if (h == 1)
																{
																	if (a[k][j] == p1 && a[i][1] == p1 && a[i][j] == 0 && a[i][0] == 0 && a[i][2] == 0 && a[1][j] == 0 && a[0][j] == 0)
																	{
																		x = j;
																		y = i;
																		sw = 1;
																	}
																}
																if (h == 2)
																{
																	if (a[k][j] == p1 && a[i][2] == p1 && a[i][j] == 0 && a[i][1] == 0 && a[i][0] == 0 && a[1][j] == 0 && a[0][j] == 0)
																	{
																		x = j;
																		y = i;
																		sw = 1;
																	}
																}
															}
														}
														if (sw == 1)
															break;
													}
													if (sw == 1)
														break;
												}
												if (sw == 1)
													break;
											}
										}
									}
								}
							}
						}
						do {
							if (a[y][x])
							{
								x = rand() % (3);
								y = rand() % (3);
								rw = 1;
							}
							else
							{
								a[y][x] = sys;
								rw = 0;
							}
						} while (rw);
						Sleep(1500);
					}
				}
				if (gw == 0)
				{
					for (i = 0; i < 3; i++)
					{
						if (a[i][0] == sys && a[i][1] == sys && a[i][2] == sys)
						{
							gw = 2;
							ctr = 9;
						}
						if (a[0][i] == sys && a[1][i] == sys && a[2][i] == sys)
						{
							gw = 2;
							ctr = 9;
						}
					}
					if (a[0][0] == sys && a[1][1] == sys && a[2][2] == sys)
					{
						gw = 2;
						ctr = 9;
					}
					if (a[0][2] == sys && a[1][1] == sys && a[2][0] == sys)
					{
						gw = 2;
						ctr = 9;
					}
					for (i = 0; i < 3; i++)
					{
						if (a[i][0] == p1 && a[i][1] == p1 && a[i][2] == p1)
						{
							gw = 1;
							ctr = 9;
						}
						if (a[0][i] == p1 && a[1][i] == p1 && a[2][i] == p1)
						{
							gw = 1;
							ctr = 9;
						}
					}
					if (a[0][0] == p1 && a[1][1] == p1 && a[2][2] == p1)
					{
						gw = 1;
						ctr = 9;
					}
					if (a[0][2] == p1 && a[1][1] == p1 && a[2][0] == p1)
					{
						gw = 1;
						ctr = 9;
					}
				}

			} while (!(ctr == 10));
			if (gw == 2)
			{
				cout << "\n\n\n\t\t\t\tSystem Won!!!";
			}
			else
			{
				if (gw == 1)
				{
					cout << "\n\n\n\t\t\t\tYou Won!!!";
				}
				else
				{
					cout << "\n\n\n\t\t\t\tGame Tied!!!";
				}
			}
			cout << "\n\n\nPress SPACE to Restart!!!";
		} while (_getch() == 32);
		break;
	}

	case 2: {
		do {
			srand((unsigned)time(NULL));
			static int a[3][3], sys, x, y, p1, i, j, k, ctr, rw, toss, rl, lvl, sw, x1, y1, x2, y2;
			do {
				system("cls");
				cout << "\t\t\t    ---DOUBLE PLAYER MODE---";
				cout << "\n\nChoose your symbol Player 1 (use their respective number):\n1.O\n2.X\n\nEnter your choice:";
				cin >> p1;
			} while (p1 > 2 || p1 < 1);
			if (p1 == 1)
			{
				sys = 2;
			}
			else
			{
				sys = 1;
			}
			system("cls");
			cout << "\t\t\t     ---DOUBLE PLAYER MODE---";
			cout << "\n\n\n\t\t\tIt's the time for toss!!!\n\nPLEASE WAIT";
			for (k = 0; k < 15; k++)
			{
				cout << " .";
				Sleep(150);
			}
			toss = rand() % (2);
			if (toss)
			{
				cout << "\n\n\t\t\tPlayer ";
				if (p1 == 1)
				{
					cout << "O";
				}
				else
				{
					cout << "X";
				}
				cout << " will start the game";
			}
			else
			{
				cout << "\n\n\t\t\tPlayer ";
				if (p1 == 1)
				{
					cout << "O";
				}
				else
				{
					cout << "X";
				}
				cout << " will start the game";
			}
			_getch();
			do {
				system("cls");
				cout << "\t\t\t    ---DOUBLE PLAYER---\n\n\n\n\n";
				ctr++;
				for (i = 0; i < 3; i++)
				{
					cout << "\t\t\t\t ";
					for (k = 0; k < 3; k++)
					{
						if (a[i][k] == 0)
						{
							cout << " ";
						}
						else
						{
							if (a[i][k] == 1)
							{
								cout << "O";
							}
							else
							{
								cout << "X";
							}
						}
						if (k < 2)
						{
							cout << " | ";
						}
					}
					cout << "\n";
					if (i < 2)
					{
						cout << "\t\t\t\t";
						for (j = 0; j < 11; j++)
						{
							cout << "-";
						}
						cout << "\n";

					}
				}
				if (ctr % 2 == toss && ctr != 10)
				{
					cout << "\n\n\n\t\t\t\tPlayer ";
					if (p1 == 1)
					{
						cout << " O";
					}
					else
					{
						cout << " X";
					}
					cout << "\n\n\t\t\t\tRow:";
					cin >> x;
					cout << "\t\t\t\tColumn:";
					cin >> y;
					if (a[x - 1][y - 1] || x > 3 || y > 3 || x < 1 || y < 1)
					{
						rw = 0;
					}
					else
					{
						a[x - 1][y - 1] = p1;
						rw = 1;
					}
					if (!rw)
					{
						cout << "\n\n\t\t\t\tInvalid Move!!!\n\n\t\t\t\tEnter your choice again";
						ctr--;
						_getch();
					}
				}
				else
				{
					if (ctr != 10)
					{
						cout << "\n\n\n\t\t\t\tPlayer ";
						if (sys == 1)
						{
							cout << " O";
						}
						else
						{
							cout << " X";
						}
						cout << "\n\n\t\t\t\tRow:";
						cin >> x;
						cout << "\t\t\t\tColumn:";
						cin >> y;
						if (a[x - 1][y - 1] || x > 3 || y > 3 || x < 1 || y < 1)
						{
							rw = 0;
						}
						else
						{
							a[x - 1][y - 1] = sys;
							rw = 1;
						}
						if (!rw)
						{
							cout << "\n\n\t\t\t\tInvalid Move!!!\n\n\t\t\t\tEnter your choice again";
							ctr--;
							_getch();
						}
					}
				}
				if (gw == 0)
				{
					for (i = 0; i < 3; i++)
					{
						if (a[i][0] == sys && a[i][1] == sys && a[i][2] == sys)
						{
							gw = 2;
							ctr = 9;
						}
						if (a[0][i] == sys && a[1][i] == sys && a[2][i] == sys)
						{
							gw = 2;
							ctr = 9;
						}
					}
					if (a[0][0] == sys && a[1][1] == sys && a[2][2] == sys)
					{
						gw = 2;
						ctr = 9;
					}
					if (a[0][2] == sys && a[1][1] == sys && a[2][0] == sys)
					{
						gw = 2;
						ctr = 9;
					}

					for (i = 0; i < 3; i++)
					{
						if (a[i][0] == p1 && a[i][1] == p1 && a[i][2] == p1)
						{
							gw = 1;
							ctr = 9;
						}
						if (a[0][i] == p1 && a[1][i] == p1 && a[2][i] == p1)
						{
							gw = 1;
							ctr = 9;
						}
					}
					if (a[0][0] == p1 && a[1][1] == p1 && a[2][2] == p1)
					{
						gw = 1;
						ctr = 9;
					}
					if (a[0][2] == p1 && a[1][1] == p1 && a[2][0] == p1)
					{
						gw = 1;
						ctr = 9;
					}
				}

			} while (!(ctr == 10));
			if (gw == 2)
			{
				cout << "\n\n\n\t\t\t\tPlayer 2 Won!!!";
			}
			else
			{
				if (gw == 1)
				{
					cout << "\n\n\n\t\t\t\tPlayer 1 Won!!!";
				}
				else
				{
					cout << "\n\n\n\t\t\t\tGame Tied!!!";
				}
			}
			cout << "\n\n\n\nDo you want to play again? (Y/N):";
			cin >> cho;
		} while (cho == 'y' || cho == 'Y');
		break;
	}
	default:	cout << "\n\n\n\t\t\t\t!!!ABORTING!!!";

	}
	cout << "\n\n\n\n\n";
	system("pause");
}