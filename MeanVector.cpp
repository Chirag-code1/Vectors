// Write the mean() function as specified above
double mean(vector<double> &v){
 	if(v.size() == 0){
    	return 0.0;
  	} else {
    double mean, sum;
         for(auto x: v)
             sum= sum+x;

       mean = sum/ v.size();
       return mean;
      }
}
