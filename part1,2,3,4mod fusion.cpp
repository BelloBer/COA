#include <iostream>
#include <string>

using namespace std;


string maize,beans,pumkin,sorghum,watermelon,groundnuts,wheat,peas,potatoes;
string plot[2];
int growthTime;
int harvestTime;

int fertility; //0-low, 1-moderate, 2-optimum
int moisture; //0-low, 1-moderate, 2-optimum



double FertilityFactor = 1.2; 


double Moisturefactor= 1.3;

double intercropfactor = 1.1;

//char maize='!',potatoes='@',beans='.',sorghum='%',watermelon='()',pumpkin='[]',groundnuts='**',wheat='+',peas='$';
string Winter(string mont){
	
	if(mont == "april" || mont == "may") {
        cout<<"Planting: "<< "Wheat, Peas, and Potatoes"<<endl;
		} 
    else if (mont == "january" || mont == "february" && mont == "march"){
        cout <<"Harvesting"<<endl;}
    else
        {
		cout<<"It's in summer"<<endl;
		}
		return mont;
	}
		
string Summer(string mon){
	
	if(mon == "august" || mon == "october") {
        cout<<"Intercropping: "<<"Maize, Beans, Pumpkin, Sorghum, Watermelons, and Groundnuts"<<endl;
		}
	else if(mon == "november" || mon == "december") {
		 cout << "Harvesting"<<endl;
        }
    else{
        return "Winter"; 
    }
    
}

void intercropping(){
	
	string crop1,crop2;
	cout<<"Enter 2 crops: "<<endl;
	cin>>crop1>>crop2;

		 
	cout<<"\n.....intercropping....: "<<crop1<<" and "<<crop2<<endl;;
	plot[0] = crop1;
	plot[1] = crop2;
	cout<<"\n....intercropping complete.....\n";
		 
	cout<<crop1<<" growing....\n"<<"harvest time:November-December\n";
	cout<<crop2<<" growing.....\n"<<"harvest time:November-December";
}
	
void relaycrop(){
	string crop;
	cout<<"Enter crop:\n";
	cin>>crop;
	
	cout<<"Planting "<<crop<<endl;
	cout<<"Planting done....\n"<<endl;
	cout<<crop<<' '<<"growing"<<"Harvest time:November-December"<<endl;
	
	char harvest;
	cout<<"proceed to harvesting crop?(y/n):"<<endl;
	cin>>harvest;
	if(harvest=='y'){
		cout<<"Harvesting....\n";
		cout<<"Crop Harvested\n";	
	}
	cout<<"\nRelay Cropping done";
}
	

	void WateringAndMoisturizing(){
		
		string moisturizePrompt;
		char moist; 
		
		
		moisturizePrompt = "Do you want to keep moisturizing y/n ?";
		cout<<moisturizePrompt<<endl;
	
		cin>>moist;
		
		if(moisture<1 && moisture>=0){ // 0-low, 1-optimum
		
		if(moist == 'y'){
			moisture++;
			cout<<"Watering"<<endl;
		}
			
		else
		{
			cout<<"thank you next"<<endl;
		}
		
		
	}
	else {
		string outOfBound = " the moisture level is out bound \n";
		cout<<outOfBound<<endl<<endl;
	}
}





//Function to calculate the yield of maize
double maizeyield(double fertility, double moisture, bool intercropped){
	double expected_yield = 10;
	double totalyield;
	
	if (fertility==0 && moisture==0){ //low moisture and low fertility
    totalyield = expected_yield; 
 }
 else if( fertility==0  && moisture==1){
 	totalyield = expected_yield*FertilityFactor;
	 }

else if( fertility==1 && moisture==0 ){
 	totalyield = expected_yield*Moisturefactor;
	 }

else if( fertility==1 && moisture==1 ){
 	totalyield = expected_yield*FertilityFactor*Moisturefactor;
	 }
	 
if(intercropped){
	 totalyield=totalyield*intercropfactor;
	}
	else{
	
	}

return totalyield;
}
	

//beans yield 

double beansyield(double fertility, double moisture, bool intercropped){
	double expected_yield = 20;
	double totalyield;
	
	if (fertility==0 && moisture==0){ //low moisture and low fertility
    totalyield = expected_yield; 
 }
 else if( fertility==0  && moisture==1){
 	totalyield = expected_yield*FertilityFactor;
	 }

else if( fertility==1 && moisture==0 ){
 	totalyield = expected_yield*Moisturefactor;
	 }

else if( fertility==1 && moisture==1 ){
 	totalyield = expected_yield*FertilityFactor*Moisturefactor;
	 }
	 
if(intercropped){
	 totalyield=totalyield*intercropfactor;
	}
	else{
	
	}

return totalyield;
}

//pumkn yield

double pumpkinyield(double fertility, double moisture, bool intercropped){
	double expected_yield = 5;
	double totalyield;
	
	if (fertility==0 && moisture==0){ //low moisture and low fertility
    totalyield = expected_yield; 
 }
 else if( fertility==0  && moisture==1){
 	totalyield = expected_yield*FertilityFactor;
	 }

else if( fertility==1 && moisture==0 ){
 	totalyield = expected_yield*Moisturefactor;
	 }

else if( fertility==1 && moisture==1 ){
 	totalyield = expected_yield*FertilityFactor*Moisturefactor;
	 }
	 
if(intercropped){
	 totalyield=totalyield*intercropfactor;
	}
	else{
	
	}

return totalyield;
}

//srghm yield

double sorghumyield(double fertility, double moisture, bool intercropped){
	double expected_yield = 7;
	double totalyield;
	
	if (fertility==0 && moisture==0){ //low moisture and low fertility
    totalyield = expected_yield; 
 }
 else if( fertility==0  && moisture==1){
 	totalyield = expected_yield*FertilityFactor;
	 }

else if( fertility==1 && moisture==0 ){
 	totalyield = expected_yield*Moisturefactor;
	 }

else if( fertility==1 && moisture==1 ){
 	totalyield = expected_yield*FertilityFactor*Moisturefactor;
	 }
	 
if(intercropped){
	 totalyield=totalyield*intercropfactor;
	}
	else{
	
	}

return totalyield;
}

//watreme yield

double watermelonyield(double fertility, double moisture, bool intercropped){
	double expected_yield = 11;
	double totalyield;
	
	if (fertility==0 && moisture==0){ //low moisture and low fertility
    totalyield = expected_yield; 
 }
 else if( fertility==0  && moisture==1){
 	totalyield = expected_yield*FertilityFactor;
	 }

else if( fertility==1 && moisture==0 ){
 	totalyield = expected_yield*Moisturefactor;
	 }

else if( fertility==1 && moisture==1 ){
 	totalyield = expected_yield*FertilityFactor*Moisturefactor;
	 }
	 
if(intercropped){
	 totalyield=totalyield*intercropfactor;
	}
	else{
	
	}

return totalyield;
}

//groundnuts yield

double groundNuts_yield(double fertility, double moisture, bool intercropped){
	double expected_yield = 15;
	double totalyield;
	
	if (fertility==0 && moisture==0){ //low moisture and low fertility
    totalyield = expected_yield; 
 }
 else if( fertility==0  && moisture==1){
 	totalyield = expected_yield*FertilityFactor;
	 }

else if( fertility==1 && moisture==0 ){
 	totalyield = expected_yield*Moisturefactor;
	 }

else if( fertility==1 && moisture==1 ){
 	totalyield = expected_yield*FertilityFactor*Moisturefactor;
	 }
	 
if(intercropped){
	 totalyield=totalyield*intercropfactor;
	}
	else{
	
	}

return totalyield;
}

//wheat yield

double wheat_yield(double fertility, double moisture, bool intercropped){
	double expected_yield = 18;
	double totalyield;
	
	if (fertility==0 && moisture==0){ //low moisture and low fertility
    totalyield = expected_yield; 
 }
 else if( fertility==0  && moisture==1){
 	totalyield = expected_yield*FertilityFactor;
	 }

else if( fertility==1 && moisture==0 ){
 	totalyield = expected_yield*Moisturefactor;
	 }

else if( fertility==1 && moisture==1 ){
 	totalyield = expected_yield*FertilityFactor*Moisturefactor;
	 }
	 
if(intercropped){
	 totalyield=totalyield*intercropfactor;
	}
	else{
	
	}

return totalyield;
}

//peas yield

double peas_yield(double fertility, double moisture, bool intercropped){
	double expected_yield = 27;
	double totalyield;
	
	if (fertility==0 && moisture==0){ //low moisture and low fertility
    totalyield = expected_yield; 
 }
 else if( fertility==0  && moisture==1){
 	totalyield = expected_yield*FertilityFactor;
	 }

else if( fertility==1 && moisture==0 ){
 	totalyield = expected_yield*Moisturefactor;
	 }

else if( fertility==1 && moisture==1 ){
 	totalyield = expected_yield*FertilityFactor*Moisturefactor;
	 }
	 
if(intercropped){
	 totalyield=totalyield*intercropfactor;
	}
	else{
	
	}

return totalyield;
}

//potatoes yield

double potato_yield(double fertility, double moisture, bool intercropped){
	double expected_yield = 21;
	double totalyield;
	
	if (fertility==0 && moisture==0){ //low moisture and low fertility
    totalyield = expected_yield; 
 }
 else if( fertility==0  && moisture==1){
 	totalyield = expected_yield*FertilityFactor;
	 }

else if( fertility==1 && moisture==0 ){
 	totalyield = expected_yield*Moisturefactor;
	 }

else if( fertility==1 && moisture==1 ){
 	totalyield = expected_yield*FertilityFactor*Moisturefactor;
	 }
	 
if(intercropped){
	 totalyield=totalyield*intercropfactor;
	}
	else{
	
	}

return totalyield;
}




void fertilizing(){
	
	char fert;
	string fertilizingPromt = "Do you want to keep fertilizing y/n ? \n";
		cout<<fertilizingPromt<<endl;
		cin>>fert;
		if(fertility<1 && fertility>=0){ //0-low fertility, 1-optimum
			
		if(fert=='y'){
			fertility++;
			cout<<"fertilizing"<<endl;
		}
		else
		{
			cout<<"off duty";
		}	
			
		}
		else {
			string outOfBound = " /// the fertility level is out bound";
			cout<<outOfBound<<endl<<endl;
		}
}


void display(string plant_type){
	
	if(plant_type=="intercrop"){
		intercropping();
		cout<<".....intercropping....\n";
		int j=5;
		while(j>0){
			for(int i=0;i<15;i++){
				cout<<"+"<<" ";
			}
			cout<<"\n";
			cout<<"\n";
		for(int i=0;i<15;i++){
			cout<<"-"<<" ";
		}
		cout<<"\n";
		cout<<"\n";
		j--;
		}
		cout<<".....intercropping complete......\n";
   }
	else if(plant_type=="relaycrop"){
		relaycrop();
		cout<<"\n......relaycropping "<<"\n";
		int j=5;
		while(j>0){
			for(int i=0;i<15;i++){
				cout<<"%"<<" ";
			}
			cout<<"\n";
			cout<<"\n";
		for(int i=0;i<15;i++){
			cout<<"%"<<" ";
		}
		cout<<"\n";
		cout<<"\n";
		j--;
		}
		cout<<"\n.....relay cropping done.....\n";	
		cout<<".....growing.....";
	}
	else if(plant_type=="plant"){
		
		string season;
		cout<<"\nenter season\n";
		cin>>season;
		
		if (season == "winter"){
			
			string month;
			cout<<"enter month\n";
			cin>>month;
			string b=Winter(month);
			
			cout<<".....intercropping....\n";
			
		int j=5;
		while(j>0){
			for(int i=0;i<15;i++){
				cout<<"+"<<" ";
			}
			
			cout<<"\n";
			cout<<"\n";
			
			for(int i=0;i<15;i++){
				cout<<"-"<<" ";
			}
			
			cout<<"\n";
			cout<<"\n";
			
			for(int i=0;i<15;i++){
				cout<<"="<<" ";}
				
			cout<<"\n";
			cout<<"\n";
			
			j--;
		}
		cout<<".....planting complete......\n";	
		}
		else if(season == "summer"){
			
		string month;
		cout<<"\nEnter Month\n";
		cin>>month;
		
		Summer(month);
		int j=5;
		while(j>0){
			for(int i=0;i<30;i++){
				cout<<"+"<<" ";
			}
			
			cout<<"\n";
			cout<<"\n";
			
			for(int i=0;i<15;i++){
				cout<<"-"<<" ";
			}
			
			cout<<"\n";
			cout<<"\n";
			
			for(int i=0;i<15;i++){
				cout<<"="<<" ";
			}
			
			cout<<"\n";
			cout<<"\n";
			
			for(int i=0;i<15;i++){
				cout<<"*"<<" ";
			}
			
			cout<<"\n";
			cout<<"\n";
			
			for(int i=0;i<15;i++){
				cout<<"&"<<" ";
			}
			
			cout<<"\n";
			cout<<"\n";
			
			for(int i=0;i<15;i++){
				cout<<"@"<<" ";
			}
			
			cout<<"\n";
			cout<<"\n";
			
			for(int i=0;i<15;i++){
				cout<<"!"<<" ";
			}
			
			cout<<"\n";
			cout<<"\n";
			
			j--;
		}
		cout<<".....planting complete......\n";	
		}
		}
		else
		{
			cout<<"probaby Spring or Autum"<<endl;
	}
  }
	
	
int main(){	


//PART 2 INTERCROPPING 
	string inter_relay_cropping = "INTERCROPPING AND RELAY CROPPING SYSTEM ";
	cout<<endl<<inter_relay_cropping<<endl<<endl;
	int choice;
	do{
		cout<<"push zero to exit "<<endl;

		cout<<"1. Intercrop\n";
		cout<<"2. Relay crop\n";
		cout<<"3. Water crops\n";
		cout<<"4. Fertilize crop\n";
		cout<<"5. Plant\n";
		
		
		//CALCULATE YIELD
		cout<<"6. Calculate yield \n";
		
		
		
	
		cin>>choice;
		
		switch(choice){
			case 1:
				display("intercrop");
				break;
			case 2:
			    display("relaycrop");
				break;
			case 3:
				WateringAndMoisturizing();
				break;
			case 4:
				fertilizing();
				break;
			case 5:
			display("plant");
				break;
			case 6:
				double fertilit,moistur;
				bool intercropped;
				cout<<"\n Enter fertility level: 0 for low, 1 for high"<<endl;
				cin>>fertilit;
				cout<<"Enter moisture level: 0 for low, 1 for high"<<endl;
				cin>>moistur;
				cout<<"Is it intercropped? 0 for no, 1 for yes"<<endl;
				cin>>intercropped;
				cout<<"\n Enter the crop number whose yield you want to calculate.\n 1.maize \n 2.beans\n 3.pumpkin \n 4.srghm \n 5.watreme \n 6.groundnuts \n 7.wheat \n 8.peas \n 9.potatoes \n";
				int choice2;
				cin>>choice2;
				switch(choice2){
					case 1:
						cout<<"The yield for plant "<<choice2<<" is "<<maizeyield(fertilit, moistur, intercropped)<<endl;
						break;
					case 2:
						cout<<"The yield for plant "<<choice2<<" is "<<beansyield(fertilit, moistur, intercropped)<<endl;
						break;
					case 3:
						cout<<"The yield for plant "<<choice2<<" is "<<pumpkinyield(fertilit, moistur, intercropped)<<endl;
						break;
					case 4:
						cout<<"The yield for plant "<<choice2<<" is "<<sorghumyield(fertilit, moistur, intercropped)<<endl;
						break;
					case 5:
						cout<<"The yield for plant "<<choice2<<" is "<<watermelonyield(fertilit, moistur, intercropped)<<endl;
						break;
					case 6:
						cout<<"The yield for plant "<<choice2<<" is "<<groundNuts_yield(fertilit, moistur, intercropped)<<endl;
						break;
					case 7:
						cout<<"The yield for plant "<<choice2<<" is "<<wheat_yield(fertilit, moistur, intercropped)<<endl;
						break;
					case 8:
						cout<<"The yield for plant "<<choice2<<" is "<<peas_yield(fertilit, moistur, intercropped)<<endl;
						break;
					case 9:
						cout<<"The yield for plant "<<choice2<<" is "<<potato_yield(fertilit, moistur, intercropped)<<endl;
						break;
					default:
						break;	
				}
			case 7:
				choice=0;
				break;		
		}
	}while(choice != 0);
	
	
	

}