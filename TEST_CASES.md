# Food Court Management System - Test Cases

## System Overview
A multi-portal food court management system with three user types:
- **Admin Portal**: Manage food stalls (add, view, delete)
- **Food Stall Portal**: Manage menu items (add, view)
- **Customer Portal**: View available menu items

---

## 1. MAIN MENU TEST CASES

### TC1.1: Main Menu Display
- **Expected**: All menu options are displayed correctly
- **Steps**: Launch the application
- **Verify**: 
  - ✓ "1. Admin Portal" is visible
  - ✓ "2. Food Stall Portal" is visible
  - ✓ "3. Customer Portal" is visible
  - ✓ "4. Exit" option exists

### TC1.2: Valid Menu Selection - Admin Portal
- **Expected**: Admin portal launches when choice is "1"
- **Steps**: Enter "1" at main menu
- **Verify**: Admin menu is displayed

### TC1.3: Valid Menu Selection - Food Stall Portal
- **Expected**: Food stall portal launches when choice is "2"
- **Steps**: Enter "2" at main menu
- **Verify**: Food stall menu is displayed

### TC1.4: Valid Menu Selection - Customer Portal
- **Expected**: Customer portal launches when choice is "3"
- **Steps**: Enter "3" at main menu
- **Verify**: Customer menu is displayed

### TC1.5: Exit Option
- **Expected**: Application exits with message "Thank You!"
- **Steps**: Enter "4" at main menu
- **Verify**: Program terminates gracefully

### TC1.6: Invalid Menu Choice
- **Expected**: Error message "Invalid Choice" displayed
- **Steps**: Enter invalid input (e.g., 5, 0, -1, 99)
- **Verify**: Error message appears and menu redisplays

### TC1.7: Non-numeric Input at Main Menu
- **Expected**: Handle gracefully or show error
- **Steps**: Enter non-numeric values (e.g., "abc", "!@#")
- **Verify**: No crash, error handling works

### TC1.8: Loop Condition Test
- **Expected**: Menu loops correctly until valid exit choice
- **Steps**: Enter multiple invalid choices (6, 7, 8), then exit with "4"
- **Verify**: Application exits after valid choice

---

## 2. ADMIN PORTAL TEST CASES

### TC2.1: Admin Menu Display
- **Expected**: Admin menu shows all options
- **Steps**: Select "1. Admin Portal" from main menu
- **Verify**:
  - ✓ "1. Add Food Stall" is visible
  - ✓ "2. View Food Stall" is visible
  - ✓ "3. Delete Food Stall" is visible
  - ✓ "4. Back" option exists

### TC2.2: Add Food Stall - Valid Input
- **Expected**: Stall is added successfully to data/stalls.txt
- **Steps**: 
  1. Navigate to Admin Portal
  2. Select "1. Add Food Stall"
  3. Enter stall name: "PizzaKing"
- **Verify**: 
  - ✓ Message "Stall Added successfully" appears
  - ✓ Entry exists in data/stalls.txt

### TC2.3: Add Food Stall - With Spaces
- **Expected**: Stall names with spaces are handled correctly
- **Steps**: 
  1. Add stall with spaces: "Pizza Palace Supreme"
- **Verify**: 
  - ✓ Full name is saved without truncation
  - ✓ data/stalls.txt contains complete name

### TC2.4: Add Multiple Stalls
- **Expected**: Multiple stalls can be added in sequence
- **Steps**: 
  1. Add stall 1: "Burger Barn"
  2. Add stall 2: "Taco Town"
  3. Add stall 3: "Noodle House"
- **Verify**: All three stalls appear in data/stalls.txt

### TC2.5: View Food Stalls
- **Expected**: All added stalls are displayed
- **Steps**: 
  1. Add some stalls
  2. Select "2. View Food Stall"
- **Verify**: 
  - ✓ "=== FOOD STALLS ===" header is shown
  - ✓ All stalls from data/stalls.txt are displayed

### TC2.6: View Stalls - Empty File
- **Expected**: Handle empty stalls.txt gracefully
- **Steps**: 
  1. Clear data/stalls.txt
  2. Select "2. View Food Stall"
- **Verify**: 
  - ✓ No crash occurs
  - ✓ Header displays but no stall entries shown

### TC2.7: Delete Food Stall
- **Expected**: Stall is removed from data/stalls.txt
- **Steps**: 
  1. Add stall "ToDelete"
  2. Select "3. Delete Food Stall"
- **Verify**: 
  - ✓ Stall is removed from file
  - ✓ Confirmation message appears

### TC2.8: Back to Main Menu
- **Expected**: Returns to main menu
- **Steps**: 
  1. At Admin Portal
  2. Select "4. Back"
- **Verify**: Main menu is displayed

### TC2.9: Repeated Admin Operations
- **Expected**: Multiple operations can be performed in sequence
- **Steps**: Add → View → Add → View → Back
- **Verify**: Each operation works correctly

---

## 3. FOOD STALL PORTAL TEST CASES

### TC3.1: Food Stall Menu Display
- **Expected**: Food stall menu shows all options
- **Steps**: Select "2. Food Stall Portal" from main menu
- **Verify**:
  - ✓ "1. Add Food Item" is visible
  - ✓ "2. View Food Item" is visible
  - ✓ "3. Back" option exists

### TC3.2: Add Food Item - Valid Input
- **Expected**: Food item is added to data/menu.txt
- **Steps**: 
  1. Navigate to Food Stall Portal
  2. Select "1. Add Food Item"
  3. Enter Food Name: "Pizza"
  4. Enter Price: "250"
- **Verify**: 
  - ✓ Message "Food Added Successfully" appears
  - ✓ Entry "Pizza 250" exists in data/menu.txt

### TC3.3: Add Food Item - Various Prices
- **Expected**: Different price values are accepted
- **Steps**: 
  1. Add item with price: "99"
  2. Add item with price: "1500"
  3. Add item with price: "0"
- **Verify**: All prices are recorded correctly in file

### TC3.4: Add Food Item - Special Characters in Name
- **Expected**: Food names with hyphens/special chars handled
- **Steps**: 
  1. Add item: "Paneer-Tikka"
- **Verify**: 
  - ✓ Item is added (though may have truncation issues due to space-separated parsing)

### TC3.5: View Food Items
- **Expected**: All added items are displayed with prices
- **Steps**: 
  1. Add several food items
  2. Select "2. View Food Item"
- **Verify**: 
  - ✓ All items display in format "ItemName - Rs.Price"
  - ✓ Prices are correctly formatted

### TC3.6: View Food Items - Empty Menu
- **Expected**: Handle empty menu.txt gracefully
- **Steps**: 
  1. Clear data/menu.txt
  2. Select "2. View Food Item"
- **Verify**: 
  - ✓ No crash occurs
  - ✓ Empty output or message shown

### TC3.7: Add Multiple Items
- **Expected**: Multiple items can be added sequentially
- **Steps**: 
  1. Add "Burger" - 150
  2. Add "Fries" - 50
  3. Add "Coke" - 30
- **Verify**: All three items appear in data/menu.txt

### TC3.8: Back to Main Menu
- **Expected**: Returns to main menu
- **Steps**: 
  1. At Food Stall Portal
  2. Select "3. Back"
- **Verify**: Main menu is displayed

### TC3.9: Input Buffer Handling
- **Expected**: Input buffer doesn't cause issues
- **Steps**: 
  1. Add item: "FriedChicken" - 200
  2. View items (input buffer should be cleared)
- **Verify**: No unexpected behavior

---

## 4. CUSTOMER PORTAL TEST CASES

### TC4.1: Customer Menu Display
- **Expected**: Customer menu shows all options
- **Steps**: Select "3. Customer Portal" from main menu
- **Verify**:
  - ✓ "1. View Menu" is visible
  - ✓ "2. Back" option exists

### TC4.2: View Menu - With Items
- **Expected**: All menu items are displayed correctly
- **Steps**: 
  1. Add food items via Food Stall Portal
  2. Select "1. View Menu" from Customer Portal
- **Verify**: 
  - ✓ All items are displayed in format "ItemName - Rs.Price"
  - ✓ Prices are correctly formatted

### TC4.3: View Menu - Empty Menu
- **Expected**: Handle empty menu gracefully
- **Steps**: 
  1. Clear data/menu.txt
  2. Select "1. View Menu"
- **Verify**: 
  - ✓ No crash occurs
  - ✓ Empty output shown

### TC4.4: View Menu - Multiple Items
- **Expected**: Display all items from menu.txt
- **Steps**: 
  1. Add 10 different food items
  2. View menu
- **Verify**: All 10 items are displayed

### TC4.5: Back to Main Menu
- **Expected**: Returns to main menu
- **Steps**: 
  1. At Customer Portal
  2. Select "2. Back"
- **Verify**: Main menu is displayed

### TC4.6: Multiple Menu Views
- **Expected**: Viewing menu multiple times works
- **Steps**: View menu → Back → View menu again
- **Verify**: Both views display correctly

---

## 5. FILE HANDLING TEST CASES

### TC5.1: File Operations - Create if Not Exists
- **Expected**: Files are created automatically if missing
- **Steps**: 
  1. Delete data/stalls.txt, data/menu.txt
  2. Run application and add stall/item
- **Verify**: Files are created automatically

### TC5.2: File Append - No Overwrite
- **Expected**: New entries are appended, not overwritten
- **Steps**: 
  1. Add stall "Stall1"
  2. Add stall "Stall2"
- **Verify**: 
  - ✓ data/stalls.txt contains both entries
  - ✓ Previous data is preserved

### TC5.3: File Read - Correct Parsing
- **Expected**: Files are read and parsed correctly
- **Steps**: 
  1. Manually add to data/menu.txt: "Samosa 40"
  2. View menu
- **Verify**: "Samosa - Rs.40" displays correctly

### TC5.4: Data Persistence - Across Sessions
- **Expected**: Data persists after application restart
- **Steps**: 
  1. Add items: Pizza, Burger, Fries
  2. Exit application
  3. Restart and view menu
- **Verify**: All previously added items are still there

### TC5.5: Data File Format
- **Expected**: Files maintain consistent format
- **Steps**: Manually inspect data files
- **Verify**: 
  - ✓ data/stalls.txt: One stall name per line
  - ✓ data/menu.txt: "ItemName Price" format per line

---

## 6. INPUT VALIDATION & ERROR HANDLING TEST CASES

### TC6.1: Non-numeric Input at Prompts
- **Expected**: Application handles gracefully
- **Steps**: Enter "abc" when expecting a number
- **Verify**: Error or loop until valid input

### TC6.2: Negative Numbers
- **Expected**: Negative prices handled
- **Steps**: Enter price: "-100"
- **Verify**: Either rejected or handled appropriately

### TC6.3: Very Large Numbers
- **Expected**: Large prices accepted
- **Steps**: Enter price: "999999"
- **Verify**: Stored and displayed correctly

### TC6.4: Empty Input (Just Enter)
- **Expected**: Handle empty input
- **Steps**: Press Enter without typing
- **Verify**: No crash, error shown or reprompt

### TC6.5: Spaces in Food Names
- **Expected**: Food names with spaces
- **Steps**: Add "Masala Dosa" (with space)
- **Verify**: May have parsing issue due to space-separated format

---

## 7. INTEGRATION TEST CASES

### TC7.1: Complete User Journey - Admin
- **Expected**: Complete admin workflow
- **Steps**: 
  1. Launch app → Select Admin
  2. Add stall "FoodHub"
  3. View stalls
  4. Add another stall "DelightDish"
  5. View stalls again
  6. Back to main menu
- **Verify**: All steps work smoothly

### TC7.2: Complete User Journey - Stall Owner
- **Expected**: Complete stall owner workflow
- **Steps**: 
  1. Launch app → Select Food Stall
  2. Add item "Biryani" - 180
  3. View items
  4. Add "Raita" - 30
  5. View items again
  6. Back to main menu
- **Verify**: All steps work smoothly

### TC7.3: Complete User Journey - Customer
- **Expected**: Complete customer workflow
- **Steps**: 
  1. Add items as stall owner
  2. Launch app → Select Customer
  3. View menu
  4. Back to main menu
- **Verify**: Customer sees items added by stall owner

### TC7.4: Cross-Portal Data Consistency
- **Expected**: Data added in one portal is visible in another
- **Steps**: 
  1. Add stall as Admin
  2. View stalls as Admin
  3. Exit and reopen, view same stalls
- **Verify**: Data is consistent

### TC7.5: Multiple Add/View Cycles
- **Expected**: System handles multiple operations
- **Steps**: 
  1. Add stall
  2. Add item
  3. View stall
  4. View menu
  5. Add another stall
  6. Add another item
  7. View both
- **Verify**: No data corruption or loss

---

## 8. EDGE CASES & STRESS TEST CASES

### TC8.1: Special Characters in Names
- **Expected**: Handle special characters
- **Steps**: Add stall "@#$%^&"
- **Verify**: Stored (may have limitations)

### TC8.2: Very Long Names
- **Expected**: Handle long input
- **Steps**: Add stall with 500+ character name
- **Verify**: Handled without buffer overflow

### TC8.3: Unicode/Non-ASCII Characters
- **Expected**: Handle international names
- **Steps**: Add "café", "naïve", "résumé"
- **Verify**: Display correctly (may have encoding issues)

### TC8.4: Rapid Input - Stress Test
- **Expected**: Application handles rapid consecutive inputs
- **Steps**: Quickly add 100 items
- **Verify**: No crash, all items stored

### TC8.5: File Corruption Recovery
- **Expected**: Handle corrupted data files
- **Steps**: 
  1. Manually corrupt data/menu.txt with invalid format
  2. Try to view menu
- **Verify**: Graceful error handling

### TC8.6: Concurrent File Access
- **Expected**: Handle multiple reads/writes
- **Steps**: Open app in multiple windows, perform operations simultaneously
- **Verify**: No data loss or corruption

---

## 9. UI/UX TEST CASES

### TC9.1: Menu Navigation
- **Expected**: Easy to navigate between portals
- **Steps**: Go Admin → Back → Stall → Back → Customer → Back
- **Verify**: Smooth navigation

### TC9.2: Confirmation Messages
- **Expected**: All actions show confirmation
- **Steps**: Add stall, add item
- **Verify**: ✓ "Added Successfully" message appears

### TC9.3: Clear Section Headers
- **Expected**: Each menu clearly labeled
- **Steps**: View each portal
- **Verify**: 
  - ✓ "=== ADMIN PORTAL ===" for admin
  - ✓ "=== FOOD STALLS ===" when viewing
  - ✓ "=== MENU ===" for customer menu

### TC9.4: Input Prompts
- **Expected**: Clear prompts for user input
- **Steps**: Go through each input prompt
- **Verify**: Each prompt is clear and instructive

---

## 10. KNOWN ISSUES & RECOMMENDATIONS

### Issue 1: Menu Loop Bug
- **Location**: main.cpp, line 44
- **Problem**: `while (choice > 5)` should be `while (choice != 4)` or `while (choice < 4)`
- **Impact**: Loop may not exit properly
- **Test**: TC1.8 may fail

### Issue 2: Typo in Exit Label
- **Location**: main.cpp, line 18
- **Problem**: Line 18 shows "2. Exit" but should be "4. Exit"
- **Recommendation**: Fix inconsistency

### Issue 3: Input Buffer Issues
- **Location**: Multiple files
- **Problem**: Inconsistent use of `cin.ignore()`
- **Impact**: May cause input issues with multi-word entries
- **Test**: TC2.3, TC3.4, TC6.5

### Issue 4: File Path Typo
- **Location**: FileHandling.cpp, line 77
- **Problem**: Path is "data/menu/.txt" should be "data/menu.txt"
- **Impact**: viewMenu() in FileHandler class won't work
- **Recommendation**: Fix path

### Issue 5: Duplicate foodname in FileHandler
- **Location**: FileHandling.cpp, line 20-21
- **Problem**: `foodname` is written twice
- **Recommendation**: Remove duplicate

### Issue 6: Price Data Type Inconsistency
- **Location**: Customer.cpp uses `float` while FoodStall.cpp uses `int`
- **Recommendation**: Standardize to one type

---

## Test Execution Summary

| Module | Total Tests | Priority |
|--------|------------|----------|
| Main Menu | 8 | HIGH |
| Admin Portal | 9 | HIGH |
| Food Stall Portal | 9 | HIGH |
| Customer Portal | 6 | HIGH |
| File Handling | 5 | HIGH |
| Input Validation | 5 | MEDIUM |
| Integration | 5 | HIGH |
| Edge Cases | 6 | MEDIUM |
| UI/UX | 4 | LOW |
| **TOTAL** | **57** | - |

---

## Test Execution Checklist

- [ ] Execute all HIGH priority tests
- [ ] Execute MEDIUM priority tests
- [ ] Document any failures
- [ ] Report bugs found
- [ ] Verify fixes
- [ ] Execute regression tests
- [ ] Final approval
