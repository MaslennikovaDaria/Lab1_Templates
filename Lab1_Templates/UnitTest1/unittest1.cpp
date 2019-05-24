#include "stdafx.h"
#include "CppUnitTest.h"
#include "C:\Users\Андрей\Desktop\Lab1_Templates\Lab1_Templates\List.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{		
	TEST_CLASS(UnitTest1)
	{
	private:
		List <int> int_list;
		List <char> char_list;
		List <double> double_list;
		List <bool> bool_list; 
		//List <string> string_list;
		//string test_string1 = "Hello, stranger", test_string2="motivation";
		int test_int1 = 5, test_int2 = 2;
		char test_char1 = 's', test_char2 = 'h';
		double test_double1 = 1.3, test_double2 = 5.9;

	public:
		//get_size tests
		TEST_METHOD(Test_get_size_emptylist)
		{
			size_t t = 0;
			Assert::AreEqual(t, char_list.get_size());
		}

		TEST_METHOD(Test_get_size_2elemnts)
		{
			size_t t = 2;
			int_list.push_front(test_int1);
			int_list.push_front(test_int2);
			Assert::AreEqual(t, int_list.get_size());
		}
		//is_Empty tests
		TEST_METHOD(isEmpty_fulllist)
		{
			double_list.push_front(test_double1);
			Assert::AreEqual(false, double_list.isEmpty());
		}

		TEST_METHOD(isEmpty_emptylist)
		{
			Assert::AreEqual(true, char_list.isEmpty());
		}

		//clear tests
		TEST_METHOD(clear_2elements)
		{
			int_list.push_front(test_int1);
			int_list.push_front(test_int2);
			int_list.clear();
			Assert::AreEqual(true, int_list.isEmpty());
		}

		TEST_METHOD(clear_5elements)
		{
			char_list.push_front(test_char1);
			char_list.push_front(test_char1);
			char_list.push_front(test_char1);
			char_list.push_front(test_char2);
			char_list.push_front(test_char2);
			char_list.clear();
			Assert::AreEqual(true, char_list.isEmpty());
		}

		//at tests
		TEST_METHOD(at_secondcharelement)
		{
			char_list.push_front(test_char2);
			char_list.push_front(test_char1);
			char_list.push_front(test_char1);
			Assert::AreEqual('h', char_list.at(2));
		}
		TEST_METHOD(at_nullintelement)
		{
			int_list.push_front(test_int2);
			int_list.push_front(test_int1);
			Assert::AreEqual(5, int_list.at(0));
		}
		//insert tests
		TEST_METHOD(insert_int)
		{
			int_list.push_front(test_int2); 
			int_list.push_front(test_int2);
			int_list.push_front(test_int2);
			int_list.insert(1, test_int1);
			Assert::AreEqual(5, int_list.at(1));
		}
		TEST_METHOD(insert_char)
		{
			char_list.insert(0, test_char1);
			Assert::AreEqual('s', char_list.at(0));
		}

		//remove tests
		TEST_METHOD(remove_oneofthe3intelements)
		{
			size_t t = 2;
			int_list.push_front(test_int2);
			int_list.push_front(test_int1);
			int_list.push_front(test_int2);
			int_list.remove(1);
			Assert::AreEqual(t, int_list.get_size());
		}
		TEST_METHOD(remove_onlycharelement)
		{
			char_list.push_front(test_char1);
			char_list.remove(0);
			Assert::AreEqual(true, char_list.isEmpty());
		}
		//set tests
		TEST_METHOD(set_charelement)
		{
			char_list.push_front(test_char1);
			char_list.push_front(test_char1);
			char_list.push_front(test_char1);
			char_list.set(1, test_char2);
			Assert::AreEqual(test_char2, char_list.at(1));
		}
		//push_back tests 
		TEST_METHOD(push_back_1elementdata)
		{
			int_list.push_back(test_int1);
			Assert::AreEqual(test_int1, int_list.at(0));
		}
		TEST_METHOD(push_back_1elementsize)
		{
			size_t t = 1;
			int_list.push_back(test_int1);
			Assert::AreEqual(t, int_list.get_size());
		}
		TEST_METHOD(push_back_4elementdata)
		{
			double_list.push_back(test_double1);
			double_list.push_back(test_double1);
			double_list.push_back(test_double1);
			double_list.push_back(test_double2);
			Assert::AreEqual(test_double2, double_list.at(3));
		}
		TEST_METHOD(push_back_4elementsize)
		{
			size_t t = 4;
			double_list.push_back(test_double1);
			double_list.push_back(test_double1);
			double_list.push_back(test_double1);
			double_list.push_back(test_double2);
			Assert::AreEqual(t, double_list.get_size());
		}
		//push_front tests
		TEST_METHOD(push_front_1elementdata)
		{
			bool_list.push_front(false);
			Assert::AreEqual(false, bool_list.at(0));
		}
		TEST_METHOD(push_front_1elementsize)
		{
			size_t t = 1;
			bool_list.push_front(true);
			Assert::AreEqual(t, bool_list.get_size());
		}
		TEST_METHOD(push_front_5elementsdata)
		{
			char_list.push_front(test_char1);
			char_list.push_front(test_char1);
			char_list.push_front(test_char1);
			char_list.push_front(test_char1);
			char_list.push_front(test_char2);
			Assert::AreEqual(test_char2, char_list.at(0));
		}
		TEST_METHOD(push_front_5elementssize)
		{
			size_t t = 5;
			char_list.push_front(test_char1);
			char_list.push_front(test_char1);
			char_list.push_front(test_char1);
			char_list.push_front(test_char1);
			char_list.push_front(test_char2);
			Assert::AreEqual(t, char_list.get_size());
		}
		//pop_back tests
		TEST_METHOD(pop_back_isempty)
		{
			bool_list.push_back(true);
			bool_list.pop_back();
			Assert::AreEqual(true, bool_list.isEmpty());
		}
		TEST_METHOD(pop_back_elementdata)
		{
			double_list.push_back(test_double1);
			double_list.push_back(test_double1);
			double_list.push_back(test_double2);
			double_list.pop_back();
			Assert::AreEqual(test_double1, double_list.at(1));
		}
		TEST_METHOD(pop_back_size)
		{
			size_t t = 2;
			double_list.push_back(test_double1);
			double_list.push_back(test_double1);
			double_list.push_back(test_double2);
			double_list.pop_back();
			Assert::AreEqual(t, double_list.get_size());
		}
		//pop_front tests
		TEST_METHOD(pop_front_isempty)
		{
			char_list.push_back(test_char1);
			char_list.pop_back();
			Assert::AreEqual(true, char_list.isEmpty());
		}
		TEST_METHOD(pop_front_elementsdata)
		{
			char_list.push_back('m'); 
			char_list.push_back('a');
			char_list.push_back('s');
			char_list.push_back('k');
			char_list.pop_front();
			Assert::AreEqual('a', char_list.at(0));
		}
		TEST_METHOD(pop_front_size)
		{
			size_t t = 3;
			char_list.push_back('m');
			char_list.push_back('a');
			char_list.push_back('s');
			char_list.push_back('k');
			char_list.pop_front();
			Assert::AreEqual(t, char_list.get_size());
		}
	};
}