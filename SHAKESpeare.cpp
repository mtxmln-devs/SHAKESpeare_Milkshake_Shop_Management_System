#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void titleMenu();
void addShake();
void editShake();
void searchShake();
void removeShake();
void buyShake();
void displayOrders();
int countOrders();

int main () {
	titleMenu ();
	return 1;
}

void titleMenu () {
	int chooseNumber = 0;
	do {
			
		cout<< "\n\t\t\t\t************************************************* " << endl
			<< "\t\t\t\t|\t\t\t\t\t\t|\t\t\t\t\t\t" << endl
			<< "\t\t\t\t|\t     WELCOME TO OUR SHAKESpeare \t| " << endl
			<< "\t\t\t\t|\t\t  MILKSHAKE SHOP!  \t\t|" << endl
			<< "\t\t\t\t|_______________________________________________| " << endl
			<< "\t\t\t\t|\t\t\t\t\t\t| " << endl
			<< "\t\t\t\t|\t\t[1] ADD SHAKES \t\t\t| " << endl
			<< "\t\t\t\t|\t\t[2] EDIT SHAKES\t\t\t| " << endl
			<< "\t\t\t\t|\t\t[3] SEARCH SHAKES\t\t| " << endl
			<< "\t\t\t\t|\t\t[4] REMOVE SHAKES\t\t| " << endl
			<< "\t\t\t\t|\t\t[5] PURCHASE SHAKES\t\t| " << endl
			<< "\t\t\t\t|\t\t[6] DISPLAY SHAKES\t\t| " << endl
			<< "\t\t\t\t|\t\t[7] EXIT\t\t\t| " << endl
			<< "\t\t\t\t|_______________________________________________| " << endl;
		cout << "\n\t\t\t\t\t\tENTER NUMBER: ";
	cin >> chooseNumber;
		
	switch (chooseNumber) {
            case 1:
            	cout<< "\n\t\t\t\t************************************************* " << endl
					<< "\t\t\t\t|\t\t\t\t\t\t|\t\t\t\t\t\t" << endl
					<< "\t\t\t\t|\t    ADD SOME MILKSHAKES YOU WANT !\t|" << endl
					<< "\t\t\t\t|_______________________________________________| " ;
                addShake();
                break;
            case 2:
                cout<< "\n\t\t\t\t************************************************* " << endl
					<< "\t\t\t\t|\t\t\t\t\t\t|\t\t\t\t\t\t" << endl
					<< "\t\t\t\t|      EDIT SOME INFO'S ABOUT YOUR MILKSHAKE!\t|" << endl
					<< "\t\t\t\t|_______________________________________________| " ;
                editShake();
                break;
			case 3:
                cout<< "\n\t\t\t\t************************************************* " << endl
					<< "\t\t\t\t|\t\t\t\t\t\t|\t\t\t\t\t\t" << endl
					<< "\t\t\t\t|    	   WHAT SHAKE ARE YOU LOOKING FOR?      |" << endl
					<< "\t\t\t\t|_______________________________________________| " << endl; 
                searchShake();
                break;
            case 4:
            	cout<< "\n\t\t\t\t************************************************* " << endl
					<< "\t\t\t\t|\t\t\t\t\t\t|\t\t\t\t\t\t" << endl
					<< "\t\t\t\t|         WHAT SHAKE DO YOU WANT TO REMOVE?     |" << endl
					<< "\t\t\t\t|_______________________________________________| ";
				displayOrders(); 
                removeShake();
                break;
            case 5:
				cout<< "\n\t\t\t\t************************************************* " << endl
					<< "\t\t\t\t|\t\t\t\t\t\t|\t\t\t\t\t\t" << endl
					<< "\t\t\t\t|       WHAT SHAKE DO YOU WANT TO PURCHASE?     |" << endl
					<< "\t\t\t\t|_______________________________________________| ";
				displayOrders();
				buyShake();
                break;
            case 6:
            	cout<< "\n\t\t\t\t************************************************* " << endl
					<< "\t\t\t\t|\t\t\t\t\t\t|\t\t\t\t\t\t" << endl
					<< "\t\t\t\t|            DISPLAYING SHAKE INVENTORY         |" << endl;
				displayOrders();
				break;
            case 7:
            	cout<< "\n\t\t\t\t************************************************* " << endl
					<< "\t\t\t\t|\t\t\t\t\t\t|\t\t\t\t\t\t" << endl
					<< "\t\t\t\t|\t   THANK YOU FOR BUYING TO OUR \t\t|\n\t\t\t\t| \t    MILKSHAKE SHOP SHAKESpeare! \t|" << endl
					<< "\t\t\t\t|_______________________________________________| ";                      
                break;
            default:
                cout << "\n\t\t\t\t\t   YOU ENTERED AN INVALID NUMBER.\n"
                     << "\t\t\t\t\t\t PLEASE TRY AGAIN.\n";
                break;
        }
    } while (chooseNumber != 7);    
}

void addShake() {
    int shake = countOrders();
    if (shake == 20) {
        cout << "\tTHE AMOUNT OF SHAKES YOU ORDERED HAS EXCEEDED ITS MAXIMUM CAPACITY.."
             << "\tREMOVE FROM YOUR INVENTORY TO ADD SOME DELICIOUS SHAKES AGAIN. ";
    } 
	else {
        string name, id;
        int price, stocks;

        cout << "\n\n\t\t\t\t\t  ENTER THE ID OF SHAKE: ";
		cin >> id;
		    string inventory;
   			bool found = false;
  		ifstream ReadInventory("temp.txt");
  		
    while (getline(ReadInventory, inventory)) {
    	int pos = inventory.find(",");
        if (pos != string::npos && inventory.substr(0, pos) == id) {
            found = true;
            cout<<"\n\t\t\t\t    The ID of the Shake has already been taken. \n\t\t\t\t\tPlease enter a different product ID.\n";      
            break;
        }
    }

    ReadInventory.close();

	if (!found){
        cout << "\t\t\t\t\t  Enter SHAKE Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "\t\t\t\t\t  Enter the SHAKE Price: ";
        cin >> price;
        cout << "\t\t\t\t\t  Enter the SHAKE Stocks: ";
        cin >> stocks;

        ofstream InventoryTxt("temp.txt", ios::app);
        
        InventoryTxt << id << "," << name << "," << price << "," << stocks << "\n";
        
        InventoryTxt.close();
        
        cout << "\n\t\t\t  --------  THE SHAKE WAS ADDED TO THE INVENTORY WELL . ------- \n\t\t\t";
        displayOrders();
    	}
	}
}

void editShake() {
    string inventory, price;
    string productId, productName;
    int stocks;
    
    bool found = false;

    cout << "\n\n\t\t\t\t---------- INVENTORY OF YOUR MILKSHAKES ---------\n\n"
         << "\t\t\t\t|\tID\tNAME\tPRICE\tSTOCKS\t\t|\n"
         << "\t\t\t\t|_______________________________________________|\n";

    ifstream ReadInventory("temp.txt");
    
    while (getline(ReadInventory, inventory)) {
        cout << "\t\t\t\t|\t" << inventory << "\t\t\t|\n";
    }
    
    ReadInventory.close();

    cout << "\n\t\t\t\t------------- END OF YOUR INVENTORY -------------\n\n";
    cout << "\n\t\t\t\t*************************************************\n"
         << "\t\t\t\t|\t\t\t\t\t\t|\t\t\t\t\t\t\n"
         << "\t\t\t\t\t ENTER SHAKE ID TO EDIT: "; 
    getline(cin >> ws, productId);
    
    ifstream InventoryRead("temp.txt");
    ofstream InventoryTemp("new.txt");

    while (getline(InventoryRead, inventory)) {
        int pos = inventory.find(",");
        if (pos != string::npos && inventory.substr(0, pos) == productId) {
            found = true;
            int wordCtr = 0;
            string temp = "";
            for (int i = 0; i <= inventory.length(); i++) {
                if (inventory[i] != ',') {
                    temp += inventory[i];
                } else {
                    if (wordCtr == 0) {
                        productId = temp;
                    } else if (wordCtr == 1) {
                        productName = temp;
                    } else if (wordCtr == 2) {
                        price = temp;
                    }
                    wordCtr++;
                    temp = "";
                }
            }
            stocks = stoi(temp);  // Convert the last word to an integer for stocks

            cout << "\t\t\t\t_________________________________________________\n";
            cout << "\n\t\t\t\t|\t\tCURRENT SHAKE INFO:\t\t|\n"
                 << "\t\t\t\t|\t\t SHAKE ID: " << productId << "\t\t\t|\n"
                 << "\t\t\t\t|\t\t SHAKE NAME: " << productName << "\t\t|\n"
                 << "\t\t\t\t|\t\t PRICE: " << price << "\t\t\t|\n"
                 << "\t\t\t\t|\t\t STOCKS: " << stocks << "\t\t\t|\n";

            cout << "\n\t\t\t\t\t\t ENTER NEW ID: ";
            getline(cin, temp);
            productId = temp;

            cout << "\t\t\t\t\t\t ENTER NEW NAME: ";
            getline(cin, productName);

            cout << "\t\t\t\t\t\t ENTER NEW PRICE: ";
            getline(cin, price);

            cout << "\t\t\t\t\t\t ENTER NEW STOCKS: ";
            cin >> stocks;

            InventoryTemp << productId + ", " + productName + ", " + price + "," << stocks << endl;

            cout << "\n\t\t\t\t ------ SHAKE INFO SUCCESSFULLY UPDATED ------.\n";
        } 
		else {
            InventoryTemp << inventory << endl;
        }
	}

    InventoryRead.close();
    InventoryTemp.close();

    if (found) {
        remove("temp.txt");
        rename("new.txt", "temp.txt");
        displayOrders();
    } else {
        cout << "\nSHAKE NOT EXIST.\n";
    }
}
	
void searchShake() {
    string ID;
    getline(cin >> ws, ID);
    
    string inventory;
    
    ifstream InventoryRead("temp.txt");
    
    bool found = false; 
    
    while (getline(InventoryRead, inventory)) {
        size_t pos = inventory.find(",");
        if (pos != string::npos && inventory.substr(0, pos) == ID) {
        	cout << "\t\t\t\t\t-------- SHAKE INFORMATION -------- " << endl
        		 << "\t\t\t\t_________________________________________________" << endl 
        		 << "\t\t\t\t|\t ID\tNAME\tPRICE\tSTOCKS \t\t|" << endl
         		 << "\t\t\t\t|_______________________________________________|" << endl
            	 << "\t\t\t\t\t   " << inventory << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "\t\t\t\t\tTHIS ID OF THE SHAKE DOES NOT EXIST!" << endl;
        cout << "\t\t\t\t\t\tPLEASE TRY AGAIN! " << endl;
    }
}

void removeShake(){
	string ID;
	cout<<"\n\n\t\t\t\t\t\tEnter the ID: ";
	cin >>ID;
	
	string inventory;
    bool found = false;
    
    ifstream InventoryRead("temp.txt");
    ofstream InventoryTemp("new.txt", ios::app);
    
    while (getline(InventoryRead, inventory)) {
        size_t pos = inventory.find(",");
        if (pos != string::npos && inventory.substr(0, pos) == ID) {
            found = true;
        }else{
            InventoryTemp <<  inventory << endl;
        }
    }
    
    InventoryRead.close();
    InventoryTemp.close();

    if (found) {
            cout << "\n\t\t\t\t   -------- SHAKE INFORMATION DELETED. -------\n"
            	 << "\n\t\t\t\t\t------ SUCCESSFULLY REMOVED. ------\n";
    } 
	else {
        cout << "SHAKE NOT FOUND";
    }
    
    remove("temp.txt");
    rename("new.txt", "temp.txt");
}

void buyShake(){
    string id;
    
    cout << "\n\t\t\t\t\t ENTER SHAKE ID TO BUY: ";
    cin >> id;
    bool found = false;
    string inventory;
    ifstream InventoryRead("temp.txt");
    ofstream InventoryTemp("new.txt");

    while (getline(InventoryRead, inventory)) {
        string temp = inventory;
        size_t pos = inventory.find(",");
        if (pos != string::npos && inventory.substr(0, pos) == id) {
            found = true;
            cout << "\n\t\t\t\t------- PURCHASING SHAKE WITH ID " << id << " ---------" << "\n\n";
            cout << "\t\t\t\t *********** SHAKE INFORMATION ************** " << "\n\n";
            cout << "\t\t\t\t\------------ ID    NAME   PRICE STOCKS --------" << endl;
            cout << "\t\t\t\t\t     " << inventory << endl << endl;
        
            // Extract the price of the item from the inventory line
            size_t pricePos = inventory.find_last_of(",");
            double price = stoi(inventory.substr(pricePos + 1));
            
            int quantityToBuy;
            cout << "\t\t\t\t ENTER THE STOCKS YOU WANT TO PURCHASE: ";
            cin >> quantityToBuy;
            
            double userMoney;
            cout << "\t\t\t\t ENTER THE MONEY YOU HAVE: ";
            cin >> userMoney;
            
           	double totalCost = price * quantityToBuy;
            if (userMoney >= totalCost) {
            // Extract the current quantity from the inventory line
                size_t quantityPos = inventory.rfind(",");
                double currentQuantity = stoi(inventory.substr(quantityPos + 1));
                
                if (currentQuantity >= quantityToBuy) {
                    // Update the quantity by subtracting the purchased quantity
                    int newQuantity = currentQuantity - quantityToBuy;
                    // Update the inventory line with the new quantity
                    temp = inventory.substr(0, quantityPos + 1) + to_string(newQuantity);
                    cout << "\n SHAKE PURCHASED SUCCESSFULLY.\n";
                    // Deduct the money from the user's account
                    userMoney -= totalCost;
                    cout << "REMAINING MONEY: " << userMoney << endl;
                } else {
                    cout << "INSUFFICIENT STOCKS AVAILABLE FOR PURCHASE.\n";
                    // If quantity is insufficient, keep the inventory line unchanged
                    temp = inventory;
                }
            } else {
                cout << "YOU CANNOT PURCHASE THIS SHAKE WITH YOUR INSUFFICIENT MONEY\n";
                // If the user doesn't have enough money, keep the inventory line unchanged
                temp = inventory;
            }
        }
        // Write the updated or unchanged inventory line to the temporary file
        InventoryTemp << temp << endl;
    }
    // Close the file streams
    InventoryRead.close();
    InventoryTemp.close();
    
    if (found) {
        remove("temp.txt");
        rename("new.txt", "temp.txt");
        cout << "SUCCESSFULLY PURCHASED THE SHAKE ";
    } else {
        cout << "\n\t\t\t\t-------------- SHAKE DOES NOT EXIST ------------ " << endl;
    } 
}

void displayOrders() {
    string inventory;

    cout << "\n\t\t\t\t*************************************************" << endl  
         << "\t\t\t\t|\t\t\t\t\t\t|\t\t\t\t\t" << endl
         << "\t\t\t\t|\t INVENTORY OF YOUR MILKSHAKES:\t\t|" << endl
         << "\t\t\t\t|_______________________________________________|" << endl;

    ifstream ReadInventory("temp.txt");

    cout << "\t\t\t\t|\t ID\tNAME\tPRICE\tSTOCKS \t\t|" << endl
         << "\t\t\t\t|_______________________________________________|" << endl;

    while (getline(ReadInventory, inventory)) {
        int pos = inventory.find(",");
        string id = inventory.substr(0, pos);

        inventory = inventory.substr(pos + 1);
        pos = inventory.find(",");
        string name = inventory.substr(0, pos);

        inventory = inventory.substr(pos + 1);
        pos = inventory.find(",");
        string price = inventory.substr(0, pos);

        string stocks = inventory.substr(pos + 1);

        cout << "\t\t\t\t|\t " << id << "\t" << name << "\t  " << price << "\t  " << stocks << "\t\t|" << endl;
    }

    cout << "\n\t\t\t\t ------------- END OF YOUR INVENTORY -----------\n";

    ReadInventory.close();
}


int countOrders() {
    string inventory;	
    int shake = 0;
    ifstream ReadInventory("temp.txt");
    while (getline(ReadInventory, inventory)) {
        shake++;
    }
    ReadInventory.close();
    return shake;

}

