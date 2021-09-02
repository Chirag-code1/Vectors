void split(vector<int> &v){
     
     int input = v.size();
     int j=0, i=0;

    while(j<input){

        if(v[i]%2 == 0 ){

            v.push_back(v[i]/2);
            v.push_back(v[i]/2);
            v.erase(v.begin()+i);
        } else {

            v.push_back((v[i]+1)/2);
            v.push_back((v[i]-1)/2);
            v.erase(v.begin()+i);
        }
        j++;
    }
