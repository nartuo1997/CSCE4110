#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main(void){	

	//O(n^2)
	    int n = 300;
        int sum = 0;        
        vector<bool> boxes(n, false);       
        for(int i = 1; i <= n; i++) 
            for(int j = 1; j <= n ; j++)        
                if (j % i == 0)
                    boxes.at(j-1).flip();           
        for(int i = 0; i<n ;i++)
            if(boxes.at(i))
             sum++;         
        cout << "The number of box open: " << sum << endl;  

	//O(M(k))
		// int n = 300;	//number of boxes
		int opened = floor(sqrt(300));
		cout << "The number of box open: " << opened << endl;
}