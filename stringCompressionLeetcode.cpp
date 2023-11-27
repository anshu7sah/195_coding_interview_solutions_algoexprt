int compress(std::vector<char>& s) {
			if(s.size()==0){
				return 0;
			}
        char* temp=new char[2 * s.size()];
        int length = 1;
        int j = 0;
        for (int i = 1; i < s.size(); i++) {
            if (i < s.size() && s[i] == s[i - 1]) {
                length += 1;
            } else {
                temp[j++] = s[i - 1];

               if (length > 1 ) {
                    if(length<10){
											temp[j++] = '0' + length;
										}else{
											string z=to_string(length);
											for(auto x:z){
												temp[j++]=x;
											}
										}	
                }
                length = 1;
            }
        }
				if(s.size()>0){
					temp[j++] = s[s.size()-1];
                if (length > 1 ) {
                    if(length<10){
											temp[j++] = '0' + length;
										}else{
											string z=to_string(length);
											for(auto x:z){
												temp[j++]=x;
											}
										}	
                }   
				}
        temp[j] = '\0';
        int i = 0;
        while (i < s.size() && i < j) {
            s[i] = temp[i];
            i++;
        }
        if (i < s.size()) {
            s[i] = '\0';
        }
				delete[] temp;
        return j;
    }