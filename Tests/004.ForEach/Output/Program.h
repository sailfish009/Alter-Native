#pragma once
#include "System/System.h"
#include "System/Collections/Generic/List.h"
#include "System/Console.h"

using namespace System_Collections_Generic;
using namespace System;
namespace ForEach{

	class Program : public Object, public gc_cleanup
	{
		public:
			static void Main(String args[]);
	};
}