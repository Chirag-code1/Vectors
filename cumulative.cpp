// Write the cumulative() function as specified above
void cumulative(vector<int> &v){
    int inputs=0, i;
    for(auto x: v){ inputs++;}
    for(i = 1; i <= inputs-1 ; i++)
    	v[i] = v[i] + v[i-1];
}
