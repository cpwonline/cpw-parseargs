#include <string>
#include <iostream>

#include "gtest/gtest.h"
#include "cpw_parseargs.h"


class TestGen : public ::testing::Test
{
	protected:
		void SetUp() override;
		void TearDown() override;

		CPWParseArgs *TestObj_;
};

//-----------------------------------------------------------------------------

void TestGen::SetUp()
{
	TestObj_ = new CPWParseArgs();
}

void TestGen::TearDown()
{
	delete TestObj_;
}

//-----------------------------------------------------------------------------

TEST_F(TestGen, SeparateBySpace)
{
	std::string command = "command --arg1 val1 -a2 -a3 --arg4 val2 --arg5=val5";
	TestObj_->Parser_(command, CPWParseArgs::OperationType::kSeparate);
	
	auto temporal_results = TestObj_->get_current_parser()->get_current_separator()->get_temporal_results();
	for(auto it = temporal_results.begin(); it != temporal_results.end(); ++it)
	{
		std::cout << "\nValue: " << *it;
	}
}


//-----------------------------------------------------------------------------

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}