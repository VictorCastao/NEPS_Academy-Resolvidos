#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    deque <int> carta1, carta2;
    
    int total1 = 0, total2 = 0, size1, size2, temp, i;
    
    cin >> size1 >> size2;
    
    for(i=0; i<size1; i++){
        cin >> temp;
        carta1.push_back(temp);
    }
    
    for(i=0; i<size2; i++){
        cin >> temp;
        carta2.push_back(temp);
    }
    
    sort(carta1.begin(), carta1.end());
    sort(carta2.begin(), carta2.end());
    
    for(i=0; i<size1; i++){
        if (find(carta2.begin(), carta2.end(), carta1[i]) == carta2.end() and i==0) total1++;
        
        else if (find(carta2.begin(), carta2.end(), carta1[i]) == carta2.end() and carta1[i] != carta1[i-1]) total1++;

    }
    
    for(int i=0; i<size2; i++){
        if (find(carta1.begin(), carta1.end(), carta2[i]) == carta1.end() and i==0) total2++;
        
        else if (find(carta1.begin(), carta1.end(), carta2[i]) == carta1.end() and carta2[i] != carta2[i-1]) total2++;
    }
    
    if (total2 <= total1) cout << total2 << endl;
    
    else cout << total1 << endl;

    return 0;
}

