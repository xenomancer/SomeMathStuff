#pragma once
#include "stdafx.h"
#include "SeriesOpsCpp.h"
#include "opt.h"
#include "fold.h"

namespace sms {
	//
	namespace seriesops {
		//


		template <typename T> T prod(T, T*, int);
		template <typename T> T prodf(T, T*, int);





		template <typename T> T prod(T x0, T* x, int n) {
			T res;

			res = x0;

			for (int i = 0; i < n; i++) {
				//
				res = res * x[i];
			}

			return res;
		}

		template <typename T> T prodf(T x0, T* x, int n) {
			T res;

			res = fold<T>([=](T a, T b) {return (a * b); }, x0, x, n);

			return res;
		}








		//
	}
}