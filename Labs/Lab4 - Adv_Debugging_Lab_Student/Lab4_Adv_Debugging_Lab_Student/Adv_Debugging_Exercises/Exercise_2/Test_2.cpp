#include "LinkedList.h"

// A test function is written for each member function of LinkedList class

void PrintList_Test()
{
	cout << "\n.... TESTING PrintList() ..." << endl;
	LinkedList<int> L(7); // this constructor will create n random nodes (data from 0 to 9)
	L.PrintList();

}

void InsertBeg_Test()
{
	cout << "\n.... TESTING InsertBeg() ..." << endl;

	LinkedList<int> MyList;

	MyList.InsertBeg(1);
	MyList.InsertBeg(2);
	MyList.InsertBeg(3);
	MyList.InsertBeg(4);

	MyList.PrintList();
}

void InsertEnd_Test()
{
	cout << "\n.... TESTING InsertEnd() ..." << endl;

	LinkedList<int> MyList2;

	MyList2.InsertEnd(1);
	MyList2.InsertEnd(2);
	MyList2.InsertEnd(3);
	MyList2.InsertEnd(4);

	MyList2.PrintList();
}

void RemoveLast_Test()
{
	cout << "\n.... TESTING RemoveLast() ..." << endl;
	int arr[] = { 9, 2, 15 };


	LinkedList<int> MyList(arr, 3); // this constructor will create n random nodes (data from 0 to 9)

	MyList.PrintList();

	Node<int> * removed = MyList.RemoveLast();

	MyList.PrintList();
	cout << "the removed node" << removed->getItem() << endl;
}

void DeleteNodesVal_Test(int TestCase)
{	
	int arr_1[] = { 6, 6, 8, 6, 9 };
	int arr_2[] = { 6, 6, 8, 6 };
	int arr_3[] = { 6, 6, 6 };
	int arr_4[] = { 6 };
	int arr_5[] = { 2, 3, 4 };


	int *TestArray; int size;

	switch (TestCase)
	{
	case 1:
		TestArray = arr_1;
		size = sizeof(arr_1)/sizeof(int);
		break;
	case 2:
		TestArray = arr_2;
		size = sizeof(arr_2) / sizeof(int);
		break;
	case 3:
		TestArray = arr_3;
		size = sizeof(arr_3) / sizeof(int);
		break;
	case 4:
		TestArray = arr_4;
		size = sizeof(arr_4) / sizeof(int);
		break;
	case 5:
		TestArray = arr_5;
		size = sizeof(arr_5) / sizeof(int);
		break;

	}

	cout << "\nTesting DeleteNodesVal case# " << TestCase << endl;
	LinkedList<int> MyList(TestArray, size); // this constructors builds the linked list from the passed array

	MyList.PrintList();

	MyList.DeleteNodesVal(6);

	MyList.PrintList();


}

int main()
{
	// ------------         INSTURCTIONS  --------------- //

	//Call each test function to make sure the corresponding 
	//member function is working
	//In case of Logical or runtime error ==> Debug
	//After correcting the function, run the test again
	//Once successful, proceed to next test function

	//PrintList_Test();

	//InsertBeg_Test();

	//InsertEnd_Test();

	//RemoveLast_Test();

	//cout << "\n.... TESTING  DeleteNodesVal() for different cases..." << endl;
	//DeleteNodesVal_Test(1);
	//DeleteNodesVal_Test(2);
	//DeleteNodesVal_Test(3);
	//DeleteNodesVal_Test(4);
	//DeleteNodesVal_Test(5);


}