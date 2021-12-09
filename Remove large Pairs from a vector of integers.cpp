// Write the removeLargePairs() function as specified above
void removeLargePairs(vector<int> &v){
if(v.size()!= 0 && v.size()>=2){
     int i=0, x, lastOdd;
     lastOdd = v[v.size()-1];
      while(i < v.size())
      {
          if(v[i] > v[i+1]){
                v.erase(v.begin()+i); 
            //ele has got reshuffled.
            //and next ele to be deleted has come on the  place from
            //which we have just deleted the element.
                v.erase(v.begin()+i);
           } else {i+=2;}
       }  
       if(v.size()%2 !=0)
        v[v.size()-1] = lastOdd;
}             
}
