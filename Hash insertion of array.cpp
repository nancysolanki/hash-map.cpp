#include <bits/stdc++.h> 
using namespace std; 

void printItinerary(map<string, string> dataSet) 
{ 
	map<string, string> reversemap; 
	map<string, string>::iterator it; 


	for (it = dataSet.begin(); it!=dataSet.end(); it++) 
		reversemap[it->second] = it->first; 

	// Find the starting point of itinerary 
	string start; 

	for (it = dataSet.begin(); it!=dataSet.end(); it++) 
	{ 
		if (reversemap.find(it->first) == reversemap.end()) 
		{ 
			start = it->first; 
			break; 
		} 
	} 


	if (start.empty()) 
	{ 
		cout << "Invalid Input" << endl; 
		return; 
	} 

	// Once we have starting point, we simple need to go next, 
	//next of next using given hash map 
	it = dataSet.find(start); 
	while (it != dataSet.end()) 
	{ 
		cout << it->first << "->" << it->second << endl; 
		it = dataSet.find(it->second); 
	} 

} 

contributed by Aditya Goel 

