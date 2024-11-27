#include "pch.h"
#include "CppUnitTest.h"
#include "../Project10/BookStore.h"
#include "../Project10/FictionBook.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestBookStore
{
	TEST_CLASS(UnitTestBookStore)
	{
	public:
		
		TEST_METHOD(CheckRemove)
		{
			FictionBook* z = new FictionBook("The Tale of the Fisherman and the Fish", "Alexander Sergeevich Pushkin", "Children's Library", 2008, "Fairy tale");
			BookStore a;
			a.addBook(z);
			Assert::IsTrue(a.removeBook(0) == 1);
			Assert::IsTrue(a.removeBook(0) == 0);
		}

		TEST_METHOD(CheckAdd)
		{
			FictionBook* z = new FictionBook("The Tale of the Fisherman and the Fish", "Alexander Sergeevich Pushkin", "Children's Library", 2008, "Fairy tale");
			BookStore a;
			a.addBook(z);
			Assert::IsTrue(a.getCount() == 1);
		}
	};
}
