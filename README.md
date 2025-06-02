# 🥤 SHAKESpeare Milkshake Shop
### A console-based milkshake shop management system with a creative Shakespearean twist, designed for managing milkshake inventory, sales, and customer interactions through a command-line interface.

![image alt](https://github.com/mtxmln-devs/SHAKESpeare_Milkshake-Shop-Management-System-Console-Based-/blob/fa801556da8aaf1cb435f8c2882b09ee78b57e73/Screenshot%202025-06-02%20223919.png)

## 📖 Overview
SHAKESpeare Milkshake Shop is a text-based application that combines the elegance of Shakespeare with the deliciousness of milkshakes. This console application provides a complete management system for a virtual milkshake shop, featuring inventory management, sales processing, and customer service functionalities. The application uses a retro ASCII art interface with a menu-driven system for easy navigation.

## ✨ Features
### 🍦 Core Milkshake Management
- **Add Shakes**: Create new milkshake recipes with ingredients and pricing
- **Edit Shakes**: Modify existing milkshake details, flavors, and specifications
- **Search Shakes**: Find specific milkshakes by name, flavor, or ingredients
- **Remove Shakes**: Delete milkshakes from the inventory system
- **Purchase Shakes**: Buy some available milkshakes from the inventory
- **Display Shakes**: View complete catalog of available milkshakes

### 💰 Business Operations
- **Purchase System**: Process customer orders and handle transactions
- **Inventory Tracking**: Monitor stock levels and milkshake availability
- **Price Management**: Set and adjust milkshake pricing

### 🎨 User Interface Features
- **ASCII Art Design**: Retro-style text-based interface with decorative borders
- **Menu-Driven Navigation**: Simple numbered menu system for easy operation
- **Interactive Console**: Real-time user input and feedback system
- **Clear Layout**: Well-organized display with visual separators
- **Error Handling**: User-friendly error messages and input validation

### 📊 Data Management
- **Persistent Storage**: Save milkshake data between sessions
- **Data Validation**: Ensure data integrity and prevent errors
- **Backup System**: Maintain data backups and recovery options
- **Export Functionality**: Generate reports and data exports


## 🛠️ Tech Stack
### Programming Language
- **C++**: Core application development
- **Standard Libraries**: iostream, fstream, string, vector for basic operations
- **File I/O**: Data persistence and file management

### Alternative Implementations
- **Python**: Console application with similar functionality
- **Java**: Object-oriented implementation with enhanced features
- **C#**: Windows console application with .NET framework

### Development Tools
- **Compiler**: GCC, Visual Studio, or Code::Blocks
- **Debugger**: GDB or integrated IDE debugger
- **Version Control**: Git for source code management
- **Text Editor**: Any preferred code editor or IDE

### Data Storage
- **Text Files**: Simple file-based storage for milkshake data
- **CSV Format**: Structured data storage for easy manipulation
- **Binary Files**: Efficient data storage for larger datasets

## 🎯 Project Goals
### 🎪 Primary Objectives
1. **Educational Tool**: Demonstrate console application development principles
2. **Business Simulation**: Provide realistic shop management experience
3. **User Experience**: Create intuitive command-line interface
4. **Data Management**: Implement effective data storage and retrieval

### 🎭 Secondary Objectives
1. **Creative Theme**: Incorporate Shakespearean elements for entertainment
2. **Code Quality**: Maintain clean, readable, and well-documented code
3. **Error Handling**: Robust input validation and error management
4. **Scalability**: Design for future feature additions and improvements

### 🚀 Long-term Vision
- GUI version with modern interface
- Database integration for advanced data management
- Multi-location support for franchise operations
- Customer loyalty program integration
- Online ordering system connectivity

## 🚀 Setup Guide
### 📋 Prerequisites
- C/C++ compiler (GCC, MinGW, Visual Studio)
- Command-line interface (Terminal, Command Prompt)
- Text editor or IDE
- Basic knowledge of console applications

### 💻 Installation Steps
#### Method 1: Compile from Source (C++)
1. **Clone the Repository**
   ```bash
   git clone https://github.com/mtxmln-devs/shakespeare-milkshake-shop.git
   cd shakespeare-milkshake-shop
   ```

2. **Compile the Application**
   ```bash
   # Using GCC
   g++ -o SHAKESpeare.cpp
   
   # Using Visual Studio (Windows)
      cl SHAKESpeare.cpp
   ```

4. **Run the Application**
   ```bash
   # Linux/Mac
   ./SHAKESpeare
   
   # Windows
   SHAKESpeare.cpp
   ```

#### Method 2: Using Makefile
1. **Clone and Navigate**
   ```bash
   git clone https://github.com/mtxmln-devs/shakespeare-milkshake-shop.git
   cd shakespeare-milkshake-shop
   ```

2. **Build with Make**
   ```bash
   make build
   ```

3. **Run Application**
   ```bash
   make run
   ```

#### Method 3: IDE Setup
1. **Open Project in IDE**
   - Import project into Code::Blocks, Dev-C++, or Visual Studio
   - Configure build settings for console application

2. **Build and Run**
   - Use IDE's build and run commands
   - Configure output directory as needed

### 🔧 Development Setup

1. **Development Environment**
   ```bash
   # Install development tools
   sudo apt-get install build-essential  # Linux
   # Or download Visual Studio Community (Windows)
   ```

2. **Project Structure Setup**
   ```bash
   mkdir src include data
   touch src/SHAKESpeare.cpp include/milkshake.h
   ```

3. **Testing Setup**
   ```bash
   # Create test data files
   touch data/milkshakes.txt data/sales.txt
   ```

## 📁 Project Structure
shakespeare-milkshake-shop/
├── src/
│   ├── SHAKESpeare.cpp      # Main application entry point
│   ├── SHAKESpeare.cpp      # Shop management functions
│   ├── SHAKESpeare.cpp      # Menu display and navigation
|
├── include/
│   ├── SHAKESpeare.cpp      # Milkshake class header
│   ├── SHAKESpeare.cpp      # Shop management header
│   ├── SHAKESpeare.cpp      # Menu system 
|
├── functions/
│   ├── [1]                  # Add Shakes
│   ├── [2]                  # Edit Shakes
│   ├── [3]                  # Search Shakes
│   ├── [4]                  # Remove Shakes
│   ├── [5]                  # Purchase Shakes 
│   ├── [6]                  # Display Shakes
|
├── data/
│   ├── temp.txt             # Milkshake inventory data
|
└── README.md                # Project documentation


## 📖 Usage Instructions
### 🎮 Basic Operations
1. **Starting the Application**
   ```bash
   ./SHAKESpeare
   ```

2. **Main Menu Navigation**
   - Enter numbers 1-7 to select menu options
   - Follow on-screen prompts for each function
   - Enter 7 to exit the application

3. **Adding New Milkshakes**
   - Select option [1] ADD SHAKES
   - Enter milkshake id, name, price, stocks
   - Confirm details before saving

4. **Managing Inventory**
   - Use [2] EDIT SHAKES to modify existing items
   - Use [4] REMOVE SHAKES to delete items
   - Use [6] DISPLAY SHAKES to view all items

### 🔍 Advanced Features
1. **Search Functionality**
   - Select [3] SEARCH SHAKES
   - Enter search criteria (id, name, price, stock)

2. **Purchase Processing**
   - Select [5] PURCHASE SHAKES
   - Choose items and quantities
   - Process payment and generate receipt

3. **Data Management**
   - Automatic saving of all changes
   - Data validation for all inputs
   - Error recovery and backup options

## 🎭 Shakespearean Elements

### 🎪 Creative Features
- **Themed Interface**: ASCII art with theatrical borders
- **Clever Naming**: "SHAKESpeare" wordplay combining shakes and Shakespeare
- **Menu Presentation**: Elegant formatting reminiscent of classical theatre programs
- **Error Messages**: Witty responses in Shakespearean style (optional feature)

### 📚 Educational Value
- Demonstrates creative programming approaches
- Shows how to make technical applications engaging
- Combines programming skills with creative presentation
- Encourages unique project themes and branding

## 🔧 Configuration

### ⚙️ Application Settings
```cpp
// config.h
#define MAX_MILKSHAKES 100
#define MAX_NAME_LENGTH 50
#define DATA_FILE "data/milkshakes.txt"
#define SALES_FILE "data/sales.txt"
```

### 📊 Data Format
```
// milkshakes.txt format
ID,Name,Price,Stock
1,Hamlet's Delight,5.99,25
2,Romeo's Romance,6.49,30
```

## 🤝 Contributing
I welcome contributions to enhance the SHAKESpeare Milkshake Shop experience!

### 🔧 Development Guidelines
- Follow consistent coding style and naming conventions
- Add comprehensive comments for complex functions
- Test all new features thoroughly
- Maintain backward compatibility with existing data files
- Update documentation for new features

### 📝 Contribution Areas
- New milkshake management features
- Enhanced user interface elements
- Additional Shakespearean themed content
- Performance optimizations
- Bug fixes and error handling improvements

## 📄 License
This project is licensed under the MIT License - see the LICENSE file for details.

## 🆘 Support
If you encounter any issues or have questions:
- 🐛 **Bug Reports**: Submit detailed issues with error messages
- 💡 **Feature Requests**: Suggest new milkshake shop features
- 📧 **Technical Support**: Contact for compilation or runtime issues
- 📚 **Documentation**: Review user manual for detailed instructions

## 🔄 Updates
Stay updated with the latest features and improvements:
- ⭐ Star the repository for notifications
- 👀 Watch for new releases and enhancements
- 📱 Follow development progress and feature additions

## 🎓 Educational Use
This project is perfect for:
- Learning console application development
- Understanding file I/O and data management
- Practicing object-oriented programming concepts
- Exploring creative programming themes
- Building portfolio projects with unique character

---

**Note**: "All the world's a stage, and all the men and women merely players... but everyone loves a good milkshake!" - SHAKESpeare (probably)
