//#include <iostream>
//#include <fstream>
//#include <cmath>
//#include <iomanip>
//
//#define MAX_ARRAY 100
//
//using namespace std;
//
//double average(double[], int);
//double standardDeviation(double[], int);
//double correlationCoefficient(double[], double[], int);
//
//int main()
//{
//  double heights[MAX_ARRAY];
//  double weights[MAX_ARRAY];
//  double meanHeight, meanWeight;
//  double stdDevHeight, stdDevWeight;
//  double correlation;
//  int count = 0;
//  double tmpD;
//
//  fstream fs;
//  fs.open("measures.txt", fstream::in);
//  while (fs >> tmpD) { //get first double of pair if it exists
//    heights[count] = tmpD;
//    fs >> tmpD; //get second double of pair
//    weights[count] = tmpD;
//    count++;
//  }
//  fs.close();
//
//  if (count == -1) { //read no data from file
//    cout << "No data" << endl;
//  }
//  else {
//    //calculate averages
//    meanHeight = average(heights, count);
//    meanWeight = average(weights, count);
//
//    //calculate standard deviations
//    stdDevHeight = standardDeviation(heights, count);
//    stdDevWeight = standardDeviation(weights, count);
//
//    //calculate correlation coefficient
//    correlation = correlationCoefficient(heights, weights, count);
//
//    //output
//    cout.precision(3); //set decimal precision
//    cout << setw(20) << " " << setw(20) << left << "Height" << setw(20) << left << "Weight" << endl;
//    for (int i = 0; i < count; i++) {
//      cout << setw(24) << " " << setw(20) << heights[i] << setw(20) << weights[i] << endl; //raw data
//    }
//    cout << setw(20) << left << " "                  << setw(20) << "**********" << setw(20) << "**********" << endl;
//    cout << setw(24) << left << "Mean Values" << setw(20) << meanHeight << setw(20) << meanWeight << endl;
//    cout << setw(24) << left << "Standard Deviation" << setw(20) << stdDevHeight << setw(20) << stdDevWeight << endl;
//    cout << setw(20) << left << "Correlation"                    << "r = " << correlation                    << endl;
//  }
//
//  system("PAUSE");
//  return 0;
//}
//
//double average(double arr[MAX_ARRAY], int i)
//{
//  double avg = 0;
//  for (int x = 0; x < i; x++) {
//    avg += arr[x];
//  }
//  avg /= i;
//  return avg;
//}
//
//double standardDeviation(double arr[MAX_ARRAY], int i)
//{
//  double stdDev;
//  double avg = average(arr, i);
//
//  double sigma = 0;
//  for (int x = 0; x < i; x++) {
//    sigma += pow((arr[x] - avg), 2);
//  }
//
//  stdDev = sqrt(sigma / i);
//  return stdDev;
//}
//
//double correlationCoefficient(double arrX[MAX_ARRAY], double arrY[MAX_ARRAY], int i)
//{
//  double r;
//  double numerator, denominator_1, denominator_2;
//  double avgX = average(arrX, i);
//  double avgY = average(arrY, i);
//
//  numerator = 0;
//  for (int x = 0; x < i; x++) {
//    numerator += (arrX[x] - avgX) * (arrY[x] - avgY);
//  }
//
//  denominator_1 = 0;
//  for (int x = 0; x < i; x++) {
//    denominator_1 += pow((arrX[x] - avgX), 2);
//  }
//  denominator_1 = sqrt(denominator_1);
//  
//  denominator_2 = 0;
//  for (int x = 0; x < i; x++) {
//    denominator_2 += pow((arrY[x] - avgY), 2);
//  }
//  denominator_2 = sqrt(denominator_2);
//
//  r = numerator / (denominator_1 * denominator_2);
//  return r;
//}