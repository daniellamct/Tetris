#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
	char box[264];
	int block[4];
	int preview_block[4];
	char input_from_user;
//	int added_block_flag = 0;
	int step = 0;
	int lose_flag = 0;
	int whichlinefull[20];
	int which_block;
	int position = 0;
	
	// function  declaration
	void mbox();
	void pbox();
	void addblock();
	
	
	void down();
	
	void down2();
	void down2_90();
	
	void down3();
	void down3_90();
	void down3_180();
	void down3_270();
	

	void left();
	
	void left2();
	void left2_90();
	
	void left3();
	void left3_90();
	void left3_180();
	void left3_270();
	
	
	void right();
	void right2();
	void right2_90();
	
	void right3();
	void right3_90();
	void right3_180();
	void right3_270();
	
	
	void harddown();
	
	void harddown2();
	void harddown2_90();
	
	void harddown3();
	void harddown3_90();
	void harddown3_180();
	void harddown3_270();
	
	
	void preview();
	void preview2();
	void preview2_90();
	
	void preview3();
	void preview3_90();
	void preview3_180();
	void preview3_270();
	
	
	void dpreview();
	void checkend();
	void checkline();
	void dline();
	void moveline();
	
	void antichange();
	 
	int main(){
		int i;
		mbox();
		pbox();
		sleep(2);
		addblock();
		preview();
		pbox();
		dpreview();

		while(lose_flag == 0){
			input_from_user = getch();
			
			switch (which_block){
				
			//  for OO
			//      OO
				case 1:
					if(input_from_user == 'k'){
						down();
						step++;
						preview();
						pbox();
						dpreview();
					} 
					
					if(input_from_user == 'j'){
						left();
						step++;
						preview();
						pbox();
						dpreview();
					}
					
					if(input_from_user == 'l'){
						right();
						step++;
						preview();
						pbox();
						dpreview();
					}
					
					if(input_from_user == ' '){
						harddown();
						step++;
					
						addblock();
						if(which_block == 1)
							preview();
						else if(which_block == 2)
							preview2();
						else if(which_block == 3)
							preview3();
						
						pbox();
						dpreview();
						checkline();
						
						dline();
												
					}
					break;
					
			//for long block OOOO
				case 2:
					switch(position%2){

						case 0:
					
							if(input_from_user == 'k'){
								down2();
								step++;
								preview2();
								pbox();
								dpreview();
							} 
							
							if(input_from_user == 'j'){
								left2();
								step++;
								preview2();
								pbox();
								dpreview();
							}
							
							if(input_from_user == 'l'){
								right2();
								step++;
								preview2();
								pbox();
								dpreview();
							}
							
							if(input_from_user == ' '){
								harddown2();
								step++;
								position = 0;
								addblock();
									if(which_block == 1)
										preview();
									else if(which_block == 2)
										preview2();
									else if(which_block == 3)
										preview3();
									
								
								pbox();
								dpreview();
								checkline();
								
								dline();
								
								
							}
							
							if(input_from_user == 'z'){
								position++;

								antichange();
			
								if(position%2 == 1){
									preview2_90();
								}else if(position%2 == 0){
									preview2();		
								}
									
								pbox();
								dpreview();
								checkline();
								dline();
								
							}			
							
							break;					
						
					
						case 1:

					
					
							if(input_from_user == 'k'){
								down2_90();
								step++;
								preview2_90();
								pbox();
								dpreview();
							} 
							
							if(input_from_user == 'j'){
								left2_90();
								step++;
								preview2_90();
								pbox();
								dpreview();
							}
							
							if(input_from_user == 'l'){
								right2_90();
								step++;
								preview2_90();
								pbox();
								dpreview();
							}
							
							if(input_from_user == ' '){
								harddown2_90();
								step++;
								position = 0;
								addblock();
									if(which_block == 1)
										preview();
									else if(which_block == 2)
										preview2();
									else if(which_block == 3)
										preview3();
									
								
								pbox();
								dpreview();
								checkline();
								
								dline();
								
								
							}
							
							if(input_from_user == 'z'){
								position++;

								antichange();
								
								if(position%2 == 1){
									preview2_90();
								}else if(position%2 == 0){
									preview2();		
								}
								pbox();
								dpreview();
								checkline();
								dline();
								
							}			
							
														
							
																	
							break;	
					}	
					//this break if for which_block
				break;	
					
		//for O    
		//   OOO
		
				case 3:	
					switch(position%4){

						case 0:
					
							if(input_from_user == 'k'){
								down3();
								step++;
								preview3();
								pbox();
								dpreview();
							} 
							
							if(input_from_user == 'j'){
								left3();
								step++;
								preview3();
								pbox();
								dpreview();
							}
							
							if(input_from_user == 'l'){
								right3();
								step++;
								preview3();
								pbox();
								dpreview();
							}
							
							if(input_from_user == ' '){
								harddown3();
								step++;
								position = 0;
								addblock();
									if(which_block == 1)
										preview();
									else if(which_block == 2)
										preview2();
									else if(which_block == 3)
										preview3();
									
								
								pbox();
								dpreview();
								checkline();
								
								dline();
								
								
							}
							
							if(input_from_user == 'z'){
								position++;

								antichange();
			
								if(position%4 == 1){
									preview3_90();
								}else if(position%4 == 2){
									preview3_180();		
								}else if(position%4 == 3){
									preview3_270();
								}else{
									preview3();
								}
									
								pbox();
								dpreview();
								checkline();
								dline();
								
							}			
							
							break;	
					

						case 1:
					
							if(input_from_user == 'k'){
								down3_90();
								step++;
								preview3_90();
								pbox();
								dpreview();
							} 
							
							if(input_from_user == 'j'){
								left3_90();
								step++;
								preview3_90();
								pbox();
								dpreview();
							}
							
							if(input_from_user == 'l'){
								right3_90();
								step++;
								preview3_90();
								pbox();
								dpreview();
							}
							
							if(input_from_user == ' '){
								harddown3_90();
								step++;
								position = 0;
								addblock();
									if(which_block == 1)
										preview();
									else if(which_block == 2)
										preview2();
									else if(which_block == 3)
										preview3();
									
								
								pbox();
								dpreview();
								checkline();
								
								dline();
								
								
							}
							
							if(input_from_user == 'z'){
								position++;

								antichange();
			
								if(position%4 == 1){
									preview3_90();
								}else if(position%4 == 2){
									preview3_180();		
								}else if(position%4 == 3){
									preview3_270();
								}else{
									preview3();
								}
									
								pbox();
								dpreview();
								checkline();
								dline();
								
							}			
							
							break;	
					
						case 2:
					
							if(input_from_user == 'k'){
								down3_180();
								step++;
								preview3_180();
								pbox();
								dpreview();
							} 
							
							if(input_from_user == 'j'){
								left3_180();
								step++;
								preview3_180();
								pbox();
								dpreview();
							}
							
							if(input_from_user == 'l'){
								right3_180();
								step++;
								preview3_180();
								pbox();
								dpreview();
							}
							
							if(input_from_user == ' '){
								harddown3_180();
								step++;
								position = 0;
								addblock();
									if(which_block == 1)
										preview();
									else if(which_block == 2)
										preview2();
									else if(which_block == 3)
										preview3();
									
								
								pbox();
								dpreview();
								checkline();
								
								dline();
								
								
							}
							
							if(input_from_user == 'z'){
								position++;

								antichange();
			
								if(position%4 == 1){
									preview3_90();
								}else if(position%4 == 2){
									preview3_180();		
								}else if(position%4 == 3){
									preview3_270();
								}else{
									preview3();
								}
									
								pbox();
								dpreview();
								checkline();
								dline();
								
							}			
							
							break;	
					
					
						case 3:
					
							if(input_from_user == 'k'){
								down3_270();
								step++;
								preview3_270();
								pbox();
								dpreview();
							} 
							
							if(input_from_user == 'j'){
								left3_270();
								step++;
								preview3_270();
								pbox();
								dpreview();
							}
							
							if(input_from_user == 'l'){
								right3_270();
								step++;
								preview3_270();
								pbox();
								dpreview();
							}
							
							if(input_from_user == ' '){
								harddown3_270();
								step++;
								position = 0;
								addblock();
									if(which_block == 1)
										preview();
									else if(which_block == 2)
										preview2();
									else if(which_block == 3)
										preview3();
									
								
								pbox();
								dpreview();
								checkline();
								
								dline();
								
								
							}
							
							if(input_from_user == 'z'){
								position++;

								antichange();
			
								if(position%4 == 1){
									preview3_90();
								}else if(position%4 == 2){
									preview3_180();		
								}else if(position%4 == 3){
									preview3_270();
								}else{
									preview3();
								}
									
								pbox();
								dpreview();
								checkline();
								dline();
								
							}			
							
							break;	
					
					
															
										
					
						
					}
					//this break is for which_block 
					break;
					
		   }


			
	
			
			
		}
		
		for(i = 0; i < 10; i++){
			printf("\n you lose!!!\n");
		}
	}
///////////////////////////////////////////////////////////////////////////////////////////	
	void mbox(){
			int i;
		//setting all to default(all to .)
		for(i = 0; i < 264; i++){
			box[i] = ' ';
		}
		
		//setting top line
		for(i = 0; i < 264; i++){
			if((i >= 0)&&(i <= 11)){
				box[i] = '#';
			}
		}
		
		//setting bottom line
		for(i = 252; i < 264; i++){
			box[i] = '#';
		}
		
		//setting right and left
		for(i = 0; i < 264; i++){
			if((i%12 == 0) || (i%12 == 11)){
				box[i] = '#';
			}
				
		}
		

	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////	
	void pbox(){
		int i;
		int showing[4];
		int checking[4];
		int ok = 1;
	

		

			
	//change to a darker color
		system("color 10 ");
		
		//many new lines
		for(i = 0; i < 10; i++){
			printf("\n");
		}
		
		
		//output the box 
		for(i = 0; i < 264; i++){
			
			if(i%12 == 0){
				printf("\n   ");
			}
			printf("%c", box[i]);
		}

		//change back to normal color
		system("color 1F");
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	void addblock(){
		int i, j;
		which_block = rand()%3 +1;
		
		if(which_block == 1){
			block[0] = 17;
			block[1] = 18;
			block[2] = 29; 
			block[3] = 30;			
		}
		
		if(which_block == 2){
			block[0] = 16;
			block[1] = 17;
			block[2] = 18; 
			block[3] = 19;
		}
		
		if(which_block == 3){
			block[0] = 17;
			block[1] = 28;
			block[2] = 29;
			block[3] = 30;
		}
		
		//checking if ended
			for(i = 0; i < 4; i++){
				if(box[block[i]] == 'O'){
					lose_flag = 1;
					break;
				
				}
			}
		for(i = 0; i < 4; i++){

			box[block[i]] = 'O';
		}
			
		}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	void down(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]+12; 
			}
			
			//check if can move or not
			ok = 1;
			for(i = 0; i < 4; i++){
	    		if(box[check[i]] == '#'){
					ok = 0;
				}
				
			}
			

				if(box[check[2]] == 'O'){
					ok = 0;
				}
	  			if(box[check[3]] == 'O'){
					ok = 0;
				}
			
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 3; i >=0; i--){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
			
			
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	void down2(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]+12; 
			}
			
			//check if can move or not
			ok = 1;
			for(i = 0; i < 4; i++){
	    		if(box[check[i]] == '#'){
					ok = 0;
				}
				
			}
			

				for(i = 0; i < 4; i++){
	    		if(box[check[i]] == 'O'){
					ok = 0;
				}
				
			}
			
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 3; i >=0; i--){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
			
			
	}
	///////////////////////////////////////////////////////////////////////////////////////////////
	void down2_90(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]+12; 
			}
			
			//check if can move or not
			ok = 1;

	    		if(box[check[0]] == '#')
					ok = 0;
							

	    		if(box[check[0]] == 'O')
					ok = 0;
				
			
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 3; i >=0; i--){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
			
			
	}
	///////////////////////////////////////////////////////////////////////////////////////////////
	
		void down3(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]+12; 
			}
			
			//check if can move or not
			ok = 1;
			for(i = 1; i < 4; i++){
	    		if(box[check[i]] == '#'){
					ok = 0;
				}
				
			}
			

				for(i = 1; i < 4; i++){
	    		if(box[check[i]] == 'O'){
					ok = 0;
				}
				
			}
			
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 3; i >=0; i--){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
			
			
	}
	///////////////////////////////////////////////////////////////////////////////////////////////
		
		void down3_90(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]+12; 
			}
			
			//check if can move or not
			ok = 1;
	

				
				if(box[check[3]] == '#')
					ok = 0;
				
			
				
				if(box[check[0]] == 'O')
					ok = 0;
								
				if(box[check[3]] == 'O')
					ok = 0;
			
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 3; i >=0; i--){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
			
			
	}
	///////////////////////////////////////////////////////////////////////////////////////////////
	
			
		void down3_180(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]+12; 
			}
			
			//check if can move or not
			ok = 1;
	

				
				if(box[check[0]] == '#')
					ok = 0;
				
			
				
				if(box[check[0]] == 'O')
					ok = 0;
							
				if(box[check[1]] == 'O')
					ok = 0;
						
				if(box[check[3]] == 'O')
					ok = 0;
			
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 3; i >=0; i--){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
			
			
	}
	///////////////////////////////////////////////////////////////////////////////////////////////
			
		void down3_270(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]+12; 
			}
			
			//check if can move or not
			ok = 1;
	

				
				if(box[check[3]] == '#')
					ok = 0;
				
			
				
				if(box[check[0]] == 'O')
					ok = 0;
								
				if(box[check[3]] == 'O')
					ok = 0;
			
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 3; i >=0; i--){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
			
			
	}
	///////////////////////////////////////////////////////////////////////////////////////////////
		void left(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]-1; 
			}
			
			//check if can move or not
			ok = 1;
			for(i = 0; i < 4; i++){
	    		if(box[check[i]] == '#'){
					ok = 0;
				}
				
			}
			
			if(box[check[0]] == 'O'){
				ok = 0;
			}
			if(box[check[2]] == 'O'){
				ok = 0;
			}
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 0; i < 4; i++){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
	}
		
/////////////////////////////////////////////////////////////////////////////////////////////////
		void left2(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]-1; 
			}
			
			//check if can move or not
			ok = 1;
			
	    		if(box[check[0]] == '#'){
					ok = 0;
				}
				
			
			
			if(box[check[0]] == 'O'){
				ok = 0;
			}

			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 0; i < 4; i++){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
		}
		

/////////////////////////////////////////////////////////////////////////////////////////////////
		void left2_90(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]-1; 
			}
			
			//check if can move or not
			ok = 1;
			for(i = 0; i < 4; i++){
	    		if(box[check[i]] == '#'){
					ok = 0;
				}				
				
			}

			for(i = 0; i < 4; i++){
	    		if(box[check[i]] == 'O'){
					ok = 0;
				}				
				
			}
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 0; i < 4; i++){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
		}
				
//////////////////////////////////////////////////////////////////////////////////////////////	
	
	
		void left3(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]-1; 
			}
			
			//check if can move or not
			ok = 1;
			
	    		if(box[check[1]] == '#'){
					ok = 0;
				}
				
			
			
			if(box[check[0]] == 'O'){
				ok = 0;
			}
			if(box[check[1]] == 'O'){
				ok = 0;
			}
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 0; i < 4; i++){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
	}
	///////////////////////////////////////////////////////////////////////////////////////////////		
	
		
		void left3_90(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]-1; 
			}
			
			//check if can move or not
			ok = 1;
			
			if(box[check[1]] == '#' || box[check[1]] == 'O')
				ok = 0;
			if(box[check[0]] == '#' || box[check[0]] == 'O')
				ok = 0;
			if(box[check[3]] == '#' || box[check[3]] == 'O')
				ok = 0;
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 0; i < 4; i++){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
	}
	///////////////////////////////////////////////////////////////////////////////////////////////	

		
		void left3_180(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]-1; 
			}
			
			//check if can move or not
			ok = 1;
			
			if(box[check[1]] == '#' || box[check[1]] == 'O')
				ok = 0;
			if(box[check[0]] == '#' || box[check[0]] == 'O')
				ok = 0;

			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 0; i < 4; i++){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
	}
	///////////////////////////////////////////////////////////////////////////////////////////////	
	
			
		void left3_270(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]-1; 
			}
			
			//check if can move or not
			ok = 1;
			
			if(box[check[1]] == '#' || box[check[1]] == 'O')
				ok = 0;
			if(box[check[2]] == '#' || box[check[2]] == 'O')
				ok = 0;
			if(box[check[3]] == '#' || box[check[3]] == 'O')
				ok = 0;
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 0; i < 4; i++){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
	}
	///////////////////////////////////////////////////////////////////////////////////////////////	
		void right(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]+1; 

			}
			
			//check if can move or not
			ok = 1;
			for(i = 0; i < 4; i++){
	    		if(box[check[i]] == '#'){
					ok = 0;
				}
				
			}
			
			if(box[check[1]] == 'O'){
				ok = 0;
			}
			if(box[check[3]] == 'O'){
				ok = 0;
			}
			
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 3; i >= 0 ; i--){
					box[block[i]] = ' ';
					block[i] = check[i];

					box[block[i]] = 'O';
		
				}
				
			}				
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		void right2(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]+1; 

			}
			
			//check if can move or not
			ok = 1;
		
	    		if(box[check[3]] == '#'){
					ok = 0;
				}
				

			if(box[check[3]] == 'O'){
				ok = 0;
			}
			
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 3; i >= 0 ; i--){
					box[block[i]] = ' ';
					block[i] = check[i];

					box[block[i]] = 'O';
		
				}
				
			}				
	}	
	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		void right2_90(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]+1; 

			}
			
			//check if can move or not
			ok = 1;
		
			for(i = 0; i < 4; i++){
	    		if(box[check[i]] == '#'){
					ok = 0;
				}				
			}

				
			for(i = 0; i < 4; i++){
	    		if(box[check[i]] == 'O'){
					ok = 0;
				}				
			}
			
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 3; i >= 0 ; i--){
					box[block[i]] = ' ';
					block[i] = check[i];

					box[block[i]] = 'O';
		
				}
				
			}				
	}	
////////////////////////////////////////////////////////////////////////////////////////////////////	

		void right3(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]+1; 

			}
			
			//check if can move or not
			ok = 1;
			
	    		if(box[check[3]] == '#'){
					ok = 0;
				}
				
			
			
			if(box[check[0]] == 'O'){
				ok = 0;
			}
			if(box[check[3]] == 'O'){
				ok = 0;
			}
			
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 3; i >= 0 ; i--){
					box[block[i]] = ' ';
					block[i] = check[i];

					box[block[i]] = 'O';
		
				}
				
			}				
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	

		
		void right3_90(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]+1; 
			}
			
			//check if can move or not
			ok = 1;
			
			if(box[check[1]] == '#' || box[check[1]] == 'O')
				ok = 0;
			if(box[check[2]] == '#' || box[check[2]] == 'O')
				ok = 0;
			if(box[check[3]] == '#' || box[check[3]] == 'O')
				ok = 0;
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 0; i < 4; i++){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
	}
	///////////////////////////////////////////////////////////////////////////////////////////////	
	
			
		void right3_180(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]+1; 
			}
			
			//check if can move or not
			ok = 1;
			

			if(box[check[0]] == '#' || box[check[0]] == 'O')
				ok = 0;
			if(box[check[3]] == '#' || box[check[3]] == 'O')
				ok = 0;
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 0; i < 4; i++){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
	}
	///////////////////////////////////////////////////////////////////////////////////////////////	
	
			
		void right3_270(){
			int i;
			int check[4];
			int ok;
			
			//calculate the new position of block 
			for(i = 0; i < 4; i++){
				check[i] = block[i]+1; 
			}
			
			//check if can move or not
			ok = 1;
			
			if(box[check[1]] == '#' || box[check[1]] == 'O')
				ok = 0;
			if(box[check[0]] == '#' || box[check[0]] == 'O')
				ok = 0;
			if(box[check[3]] == '#' || box[check[3]] == 'O')
				ok = 0;
			
			//if ok, then sub check into block, then move
			if(ok == 1){
				for(i = 0; i < 4; i++){
					box[block[i]] = ' ';
					block[i] = check[i];
					box[block[i]] = 'O';
		
				}
				
			}				
	}
	///////////////////////////////////////////////////////////////////////////////////////////////	
		void harddown(){
			int down_most_flag;
			int i;
			int check[4];
			int ok;
			
			do{

				//calculate the new position of block 
				for(i = 0; i < 4; i++){
					check[i] = block[i]+12; 
				}
				
				//check if can move or not
				ok = 1;
				for(i = 0; i < 4; i++){
		    		if(box[check[i]] == '#'){
						ok = 0;
					}
					
				}
				

				if(box[check[2]] == 'O'){
					ok = 0;
				}
	  			if(box[check[3]] == 'O'){
					ok = 0;
				}
				
				//if ok, change position to check further downward
				if(ok == 1){
					for(i = 3; i >=0; i--){
						box[block[i]] = ' ';
						block[i] = check[i];	
					}
				}else if(ok == 0){
					for(i = 3; i >= 0; i-- ){
						box[block[i]] = 'O';
					}
					
				}			
			
			
			}while(ok !=0);
		}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		void harddown2(){
			int down_most_flag;
			int i;
			int check[4];
			int ok;
			
			do{

				//calculate the new position of block 
				for(i = 0; i < 4; i++){
					check[i] = block[i]+12; 
				}
				
				//check if can move or not
				ok = 1;
				for(i = 0; i < 4; i++){
		    		if(box[check[i]] == '#'){
						ok = 0;
					}
					
				}
				

				for(i = 0; i < 4; i++){
		    		if(box[check[i]] == 'O'){
						ok = 0;
					}
					
				}
				
				//if ok, change position to check further downward
				if(ok == 1){
					for(i = 3; i >=0; i--){
						box[block[i]] = ' ';
						block[i] = check[i];	
					}
				}else if(ok == 0){
					for(i = 3; i >= 0; i-- ){
						box[block[i]] = 'O';
					}
					
				}			
			
			
			}while(ok !=0);
		}
		
		
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		void harddown2_90(){
			int down_most_flag;
			int i;
			int check[4];
			int ok;
			
			do{

				//calculate the new position of block 
				for(i = 0; i < 4; i++){
					check[i] = block[i]+12; 
				}
				
				//check if can move or not
				ok = 1;
			
		    		if(box[check[0]] == '#'){
						ok = 0;
					}
					
		    		if(box[check[0]] == 'O'){
						ok = 0;
					}
				
				//if ok, change position to check further downward
				if(ok == 1){
					for(i = 3; i >=0; i--){
						box[block[i]] = ' ';
						block[i] = check[i];	
					}
				}else if(ok == 0){
					for(i = 3; i >= 0; i-- ){
						box[block[i]] = 'O';
					}
					
				}			
			
			
			}while(ok !=0);
		}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	void harddown3(){
			int down_most_flag;
			int i;
			int check[4];
			int ok;
			
			do{

				//calculate the new position of block 
				for(i = 0; i < 4; i++){
					check[i] = block[i]+12; 
				}
				
				//check if can move or not
				ok = 1;
				for(i = 1; i < 4; i++){
		    		if(box[check[i]] == '#'){
						ok = 0;
					}
					
				}
				
				for(i = 1; i < 4; i++){
		    		if(box[check[i]] == 'O'){
						ok = 0;
					}
					
				}


				
				//if ok, change position to check further downward
				if(ok == 1){
					for(i = 3; i >=0; i--){
						box[block[i]] = ' ';
						block[i] = check[i];	
					}
				}else if(ok == 0){
					for(i = 3; i >= 0; i-- ){
						box[block[i]] = 'O';
					}
					
				}			
			
			
			}while(ok !=0);
		}
		
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	
		void harddown3_90(){
			int down_most_flag;
			int i;
			int check[4];
			int ok;
			
			do{

				//calculate the new position of block 
				for(i = 0; i < 4; i++){
					check[i] = block[i]+12; 
				}
				
				//check if can move or not
				ok = 1;
				
				if(box[check[0]] == '#' || box[check[0]] == 'O')
					ok = 0;
				if(box[check[3]] == '#' || box[check[3]] == 'O')
					ok = 0;


				
				//if ok, change position to check further downward
				if(ok == 1){
					for(i = 3; i >=0; i--){
						box[block[i]] = ' ';
						block[i] = check[i];	
					}
				}else if(ok == 0){
					for(i = 3; i >= 0; i-- ){
						box[block[i]] = 'O';
					}
					
				}			
			
			
			}while(ok !=0);
		}
		
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	
		
		void harddown3_180(){
			int down_most_flag;
			int i;
			int check[4];
			int ok;
			
			do{

				//calculate the new position of block 
				for(i = 0; i < 4; i++){
					check[i] = block[i]+12; 
				}
				
				//check if can move or not
				ok = 1;
				
				if(box[check[1]] == '#' || box[check[1]] == 'O')
					ok = 0;				
				if(box[check[0]] == '#' || box[check[0]] == 'O')
					ok = 0;
				if(box[check[3]] == '#' || box[check[3]] == 'O')
					ok = 0;


				
				//if ok, change position to check further downward
				if(ok == 1){
					for(i = 3; i >=0; i--){
						box[block[i]] = ' ';
						block[i] = check[i];	
					}
				}else if(ok == 0){
					for(i = 3; i >= 0; i-- ){
						box[block[i]] = 'O';
					}
					
				}			
			
			
			}while(ok !=0);
		}
		
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	
		void harddown3_270(){
			
			int down_most_flag;
			int i;
			int check[4];
			int ok;
			
			do{

				//calculate the new position of block 
				for(i = 0; i < 4; i++){
					check[i] = block[i]+12; 
				}
				
				//check if can move or not
				ok = 1;
				
			
				if(box[check[0]] == '#' || box[check[0]] == 'O')
					ok = 0;
				if(box[check[3]] == '#' || box[check[3]] == 'O')
					ok = 0;


				
				//if ok, change position to check further downward
				if(ok == 1){
					for(i = 3; i >=0; i--){
						box[block[i]] = ' ';
						block[i] = check[i];	
					}
				}else if(ok == 0){
					for(i = 3; i >= 0; i-- ){
						box[block[i]] = 'O';
					}
					
				}			
			
			
			}while(ok !=0);
		}
		
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	void preview(){

			int i;
			int check[4];
			int ok;
			
			for(i = 0; i < 4; i++)
				preview_block[i] = block[i];
				
			do{
				//delete the previous preview_block
			//	for(i = 0; i < 4; i++){
				//	box[preview_block[i]] = '.';
			//	}
				
				
				//calculate the new position of block 
				for(i = 0; i < 4; i++){
					check[i] = preview_block[i]+12; 
				}
				
				//check if can move down or not
				ok = 1;
				for(i = 0; i < 4; i++){
		    		if(box[check[i]] == '#'){
						ok = 0;
					}
					
				}
				

				if(box[check[2]] == 'O'){
					ok = 0;
				}
	  			if(box[check[3]] == 'O'){
					ok = 0;
				}
				
				//if ok, then sub check into block, then move
				if(ok == 1){
					for(i = 3; i >=0; i--){
						preview_block[i] = preview_block[i] + 12;
			
					}
					
				}
			
			
			}while(ok !=0);	
			
			for(i = 0; i < 4; i++)
					box[preview_block[i]] = '*';				
				
			
			for(i = 0; i < 4; i++)
				box[block[i]] = 'O';
			
	
	}	
/////////////////////////////////////////////////////////////////////////////////////////////
	void preview2(){

			int i;
			int check[4];
			int ok;
			
			for(i = 0; i < 4; i++)
				preview_block[i] = block[i];
				
			do{
				//delete the previous preview_block
			//	for(i = 0; i < 4; i++){
				//	box[preview_block[i]] = '.';
			//	}
				
				
				//calculate the new position of block 
				for(i = 0; i < 4; i++){
					check[i] = preview_block[i]+12; 
				}
				
				//check if can move down or not
				ok = 1;
				for(i = 0; i < 4; i++){
		    		if(box[check[i]] == '#'){
						ok = 0;
					}
					
				}
				

				for(i = 0; i < 4; i++){
		    		if(box[check[i]] == 'O'){
						ok = 0;
					}
					
				}
				
				//if ok, then sub check into block, then move
				if(ok == 1){
					for(i = 3; i >=0; i--){
						preview_block[i] = preview_block[i] + 12;
			
					}
					
				}
			
			
			}while(ok !=0);	
			
			for(i = 0; i < 4; i++)
					box[preview_block[i]] = '*';				
				
			
			for(i = 0; i < 4; i++)
				box[block[i]] = 'O';
	}	
	
/////////////////////////////////////////////////////////////////////////////////////////////
	void preview2_90(){

			int i;
			int check[4];
			int ok;
			
			for(i = 0; i < 4; i++)
				preview_block[i] = block[i];
				
			do{
				//delete the previous preview_block
			//	for(i = 0; i < 4; i++){
				//	box[preview_block[i]] = '.';
			//	}
				
				
				//calculate the new position of block 
				for(i = 0; i < 4; i++){
					check[i] = preview_block[i]+12; 
				}
				
				//check if can move down or not
				ok = 1;
			
		    		if(box[check[0]] == '#')
						ok = 0;
			
					
		    		if(box[check[0]] == 'O')
						ok = 0;
				
				//if ok, then sub check into block, then move
				if(ok == 1){
					for(i = 3; i >=0; i--){
						preview_block[i] = preview_block[i] + 12;
			
					}
					
				}
			
			
			}while(ok !=0);	
			
			for(i = 0; i < 4; i++)
					box[preview_block[i]] = '*';				
				
			
			for(i = 0; i < 4; i++)
				box[block[i]] = 'O';
	}	
//////////////////////////////////////////////////////////////////////////////////////////


	void preview3(){

			int i;
			int check[4];
			int ok;
			
			for(i = 0; i < 4; i++)
				preview_block[i] = block[i];
				
			do{
				//delete the previous preview_block
			//	for(i = 0; i < 4; i++){
				//	box[preview_block[i]] = '.';
			//	}
				
				
				//calculate the new position of block 
				for(i = 0; i < 4; i++){
					check[i] = preview_block[i]+12; 
				}
				
				//check if can move down or not
				ok = 1;
				for(i = 1; i < 4; i++){
		    		if(box[check[i]] == '#'){
						ok = 0;
					}
					
				}
				
				for(i = 1; i < 4; i++){
		    		if(box[check[i]] == 'O'){
						ok = 0;
					}
					
				}

				
				//if ok, then sub check into block, then move
				if(ok == 1){
					for(i = 3; i >=0; i--){
						preview_block[i] = preview_block[i] + 12;
			
					}
					
				}
			
			
			}while(ok !=0);	
			
			for(i = 0; i < 4; i++)
					box[preview_block[i]] = '*';				
				
			
			for(i = 0; i < 4; i++)
				box[block[i]] = 'O';
			
	
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////	

	void preview3_90(){

			int i;
			int check[4];
			int ok;
			
			for(i = 0; i < 4; i++)
				preview_block[i] = block[i];
				
			do{
				//delete the previous preview_block
			//	for(i = 0; i < 4; i++){
				//	box[preview_block[i]] = '.';
			//	}
				
				
				//calculate the new position of block 
				for(i = 0; i < 4; i++){
					check[i] = preview_block[i]+12; 
				}
				
				//check if can move down or not
				ok = 1;
				
				if(box[check[0]] == '#' || box[check[0]] == 'O')
					ok = 0;
				if(box[check[3]] == '#' || box[check[3]] == 'O')
					ok = 0;



				
				//if ok, then sub check into block, then move
				if(ok == 1){
					for(i = 3; i >=0; i--){
						preview_block[i] = preview_block[i] + 12;
			
					}
					
				}
			
			
			}while(ok !=0);	
			
			for(i = 0; i < 4; i++)
					box[preview_block[i]] = '*';				
				
			
			for(i = 0; i < 4; i++)
				box[block[i]] = 'O';
			
	
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////	


	void preview3_180(){

			int i;
			int check[4];
			int ok;
			
			for(i = 0; i < 4; i++)
				preview_block[i] = block[i];
				
			do{
				//delete the previous preview_block
			//	for(i = 0; i < 4; i++){
				//	box[preview_block[i]] = '.';
			//	}
				
				
				//calculate the new position of block 
				for(i = 0; i < 4; i++){
					check[i] = preview_block[i]+12; 
				}
				
				//check if can move down or not
				ok = 1;
				
				
				if(box[check[1]] == '#' || box[check[1]] == 'O')
					ok = 0;				
				if(box[check[0]] == '#' || box[check[0]] == 'O')
					ok = 0;
				if(box[check[3]] == '#' || box[check[3]] == 'O')
					ok = 0;



				
				//if ok, then sub check into block, then move
				if(ok == 1){
					for(i = 3; i >=0; i--){
						preview_block[i] = preview_block[i] + 12;
			
					}
					
				}
			
			
			}while(ok !=0);	
			
			for(i = 0; i < 4; i++)
					box[preview_block[i]] = '*';				
				
			
			for(i = 0; i < 4; i++)
				box[block[i]] = 'O';
			
	
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////	


	void preview3_270(){

			int i;
			int check[4];
			int ok;
			
			for(i = 0; i < 4; i++)
				preview_block[i] = block[i];
				
			do{
				//delete the previous preview_block
			//	for(i = 0; i < 4; i++){
				//	box[preview_block[i]] = '.';
			//	}
				
				
				//calculate the new position of block 
				for(i = 0; i < 4; i++){
					check[i] = preview_block[i]+12; 
				}
				
				//check if can move down or not
				ok = 1;
				
			
				if(box[check[0]] == '#' || box[check[0]] == 'O')
					ok = 0;
				if(box[check[3]] == '#' || box[check[3]] == 'O')
					ok = 0;




				
				//if ok, then sub check into block, then move
				if(ok == 1){
					for(i = 3; i >=0; i--){
						preview_block[i] = preview_block[i] + 12;
			
					}
					
				}
			
			
			}while(ok !=0);	
			
			for(i = 0; i < 4; i++)
					box[preview_block[i]] = '*';				
				
			
			for(i = 0; i < 4; i++)
				box[block[i]] = 'O';
			
	
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////	
	void dpreview(){
		int i;

			for(i = 0; i < 4; i++){

					box[preview_block[i]] = ' ';

				
			}			

			for(i = 0; i < 4; i++){
				box[block[i]] = 'O';
			}

	}
//////////////////////////////////////////////////////////////////////////////////////////
//not using this currently, block will be checked in the addblock function
	void checkend(){
		int i;
		for(i = 0; i < 4; i++){
			if(box[block[i]] == 'O'){
				printf("you lose!!!");
				break;
				
			}
		}
	}
//////////////////////////////////////////////////////////////////////////////////////////
	void checkline(){
		
		int quit_checking_line = 0;
		int i, j, ii;
		int line = 0;
		
		//setting whichlinefull[] all into default (0)
//		int whichlinefull[20];
		
		for(i = 0; i < 20; i++){
			whichlinefull[i] = 0;

		}
		
		//checking
		for(i = 13; i < 251; i = i+12){

			j = 0;
			ii = i;
			quit_checking_line = 0;
			while((j <= 9) && (quit_checking_line == 0)){
				
				if(box[ii] == 'O'){
	
					j++;
					ii++;

				
				}else{
					
					quit_checking_line = 1;

				}
				
			
				
			}
				if(j == 10){

					whichlinefull[line] = 1;
				}	
				
			line++;
			
		}
		

	}		
	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		void dline(){
		
		int i, ii;
		int need_deline_flag = 0;


		for(i = 0; i < 20; i++){

			
			if(whichlinefull[i] == 1){
				need_deline_flag = 1;
				
	//changing fullfilled line to @ 		
				//white-white color				
				system("color F7");
				
				for(ii = (i*12 + 1 +12); ii < (i*12 +11 +12); ii++){

					box[ii] = '@';
				}
			}	
		}
		
	//output the fullfilled line with @	
			if(need_deline_flag == 1){
				
			//output everything
				//many new lines
				for(i = 0; i < 10; i++){
					printf("\n");
				}
				
				
				//output the box 
				for(i = 0; i < 264; i++){
					
					if(i%12 == 0){
						printf("\n   ");
					}
					printf("%c", box[i]);
				}
					
			//change to white-red color		
					system("color FC");
					
					
	
			
			sleep(1);
			
	//change @ line into ...line
			for(i = 13; i < 251; i++){
				if(box[i] == '@'){
	
					box[i] = '.';
				}
			}
			
			
			
			
			//output everything
				//change to white-white color
				system("color F7");
				
				//many new lines
				for(i = 0; i < 10; i++){
					printf("\n");
				}
				
				
				//output the box 
				for(i = 0; i < 264; i++){
					
					if(i%12 == 0){
						printf("\n   ");
					}
					printf("%c", box[i]);
				}
			
				
				//change back to white-red color
				system("color FC");
				
				
				sleep(1);
				
				
			//delete the ... line
			for(i = 13; i < 251; i++){
				if(box[i] == '.'){

					box[i] = ' ';
				}
			}
			
			
			moveline();
			
			
			//output everything
				//change to white-white color
				system("color F7");
				
				//many new lines
				for(i = 0; i < 10; i++){
					printf("\n");
				}
				
				if(which_block == 1){
					preview();
				}else if(which_block == 2){
					preview2();
				}else if(which_block == 3){
					preview3();
				}
					
		
				//output the box 
				for(i = 0; i < 264; i++){
					
					if(i%12 == 0){
						printf("\n   ");
					}
					printf("%c", box[i]);
				}
			
				
		dpreview();
				
				//change back to white-red color
			//	system("color FC");
				
				
			//	sleep(1);
				
				//change the color back to normal to blue
				system("color 1F");
			}	
				
			
	}
	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	void moveline(){
		int l, i;
		int tempblock[4];
	printf("\n");
	//remove block before moving everything
			for(i = 0; i < 4; i++){

				box[block[i]] = ' ';

		}
		
		
		for(l = 1; l <=19; l++ ){
			if(whichlinefull[l] == 1){

				for(i = l*12+10; i >= 13; i--){
					if((i%12 != 11) && (i%12 != 0)){
						box[i+12] = box[i]; 
						box[i] = ' ';
					}
					
				}
			}
		}
		
	//put back the block after moving everything

			for(i = 0; i < 4; i++){
				
				box[block[i]] = 'O';

		}
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	void antichange(){
		int i;
		int ok = 1;
		int check[4];

		switch(which_block){
			case 2:

				if(position%2 == 1){
					//check new position is ok or not
						check[0] = block[0] + 13;
			   		    check[1] = block[1];
						check[2] = block[2] - 13;
						check[3] = block[3] - 26;	
						


						
						for(i = 0; i < 4; i++){
							if(box[check[i]] == '#')
								ok = 0;
						}
						
						if(box[check[0]] == 'O')
							ok = 0;
						
						if(box[check[2]] == 'O')
							ok = 0;
						
						if(box[check[3]] == 'O')
							ok = 0;
						
					//if new position is ok, then will rotate the block		
						if(ok == 1){
							for( i = 0; i < 4; i++){
								box[block[i]] = ' ';
							}

							block[0] = block[0] + 13;
				   		    block[1] = block[1];
							block[2] = block[2] - 13;
							block[3] = block[3] - 26;
							
							for( i = 0; i < 4; i++){
								box[block[i]] = 'O';
							}							
						}else{

							position--;
						}

						
				}else if(position%2 == 0){
				
						check[0] = block[0] - 13;
			   		    check[1] = block[1];
						check[2] = block[2] + 13;
						check[3] = block[3] + 26;	
						

						

						
						for(i = 0; i < 4; i++){
							if(box[check[i]] == '#')
								ok = 0;
						}
	
						
						if(box[check[0]] == 'O')
							ok = 0;
						
						if(box[check[2]] == 'O')
							ok = 0;
						
						if(box[check[3]] == 'O')
							ok = 0;
							
					//if new position is ok, then will rotate the block		
						if(ok == 1){
							for( i = 0; i < 4; i++){
								box[block[i]] = ' ';
							}
//			printf("\nok to antichange\n");
							block[0] = block[0] - 13;
				   		    block[1] = block[1];
							block[2] = block[2] + 13;
							block[3] = block[3] + 26;	
								
							for( i = 0; i < 4; i++){
								box[block[i]] = 'O';
							}							
						}else{
//			printf("\n notok to antichange\n");
							position--;
						}
						
				}		
				break;
			
			//for  O
			//    OOO
			case 3:
				if(position%4 == 1){
					//check new position is ok or not
						check[0] = block[0] + 11;
			   		    check[1] = block[1] - 11;
						check[2] = block[2];
						check[3] = block[3] + 11;;	
						


						
						for(i = 0; i < 4; i++){
							if(box[check[i]] == '#')
								ok = 0;
						}
						

						
						if(box[check[3]] == 'O')
							ok = 0;
						
					//if new position is ok, then will rotate the block		
						if(ok == 1){
							for( i = 0; i < 4; i++){
								box[block[i]] = ' ';
							}
	//		printf("\nok to antichange\n");
							block[0] = block[0] + 11;
				   		    block[1] = block[1] - 11;
							block[2] = block[2];
							block[3] = block[3] + 11;
							
							for( i = 0; i < 4; i++){
								box[block[i]] = 'O';
							}							
						}else{
	//		printf("\n notok to antichange\n");
							position--;
						}

						
				}else if(position%4 == 2){
					//check new position is ok or not
						check[0] = block[0] + 13;
			   		    check[1] = block[1] + 11;
						check[2] = block[2];
						check[3] = block[3] - 11;;	
						


						
						for(i = 0; i < 4; i++){
							if(box[check[i]] == '#')
								ok = 0;
						}
						

						
						if(box[check[3]] == 'O')
							ok = 0;
						
					//if new position is ok, then will rotate the block		
						if(ok == 1){
							for( i = 0; i < 4; i++)
								box[block[i]] = ' ';
		//		printf("\nok to antichange\n");					

							block[0] = block[0] + 13;
				   		    block[1] = block[1] + 11;
							block[2] = block[2];
							block[3] = block[3] - 11;
							
							for( i = 0; i < 4; i++){
								box[block[i]] = 'O';
							}							
						}else{
		//	printf("\n not ok to antichange\n");
							position--;
						}
					
					
					
					
				}else if(position%4 == 3){
	
						//check new position is ok or not
						check[0] = block[0] - 11;
			   		    check[1] = block[1] - 11;
						check[2] = block[2];
						check[3] = block[3] + 11;;	
						


						
						for(i = 0; i < 4; i++){
							if(box[check[i]] == '#')
								ok = 0;
						}
						

						
						if(box[check[1]] == 'O')
							ok = 0;
						
					//if new position is ok, then will rotate the block		
						if(ok == 1){
		//		printf("\nok to antichange\n");
							for( i = 0; i < 4; i++){
								box[block[i]] = ' ';
							}

							block[0] = block[0] - 11;
				   		    block[1] = block[1] - 11;
							block[2] = block[2];
							block[3] = block[3] + 11;
							
							for( i = 0; i < 4; i++){
								box[block[i]] = 'O';
							}							
						}else{
	//		printf("\n not ok to antichange\n");
							position--;
						}
					
					
					
				}else if(position%4 == 0){
					//check new position is ok or not
						check[0] = block[0] - 13;
			   		    check[1] = block[1] + 11;
						check[2] = block[2];
						check[3] = block[3] - 11;;	
						


						
						for(i = 0; i < 4; i++){
							if(box[check[i]] == '#')
								ok = 0;
						}
						

						
						if(box[check[1]] == 'O')
							ok = 0;
						
					//if new position is ok, then will rotate the block		
						if(ok == 1){
							
	//		printf("\nok to antichange\n");
							for( i = 0; i < 4; i++){
								box[block[i]] = ' ';
							}

							block[0] = block[0] - 13;
				   		    block[1] = block[1] + 11;
							block[2] = block[2];
							block[3] = block[3] - 11;
							
							for( i = 0; i < 4; i++){
								box[block[i]] = 'O';
							}							
						}else{
							
	//		printf("\nnot ok to antichange\n");
							position--;
						}

				}
			break;
		}
	}
