#pragma once
#include "stdafx.h"
#include "SeriesOpsCpp.h"
#include "opt.h"

namespace sms {
	//
	namespace seriesops {
		//


		template <typename T>
		T fold(T(*func)(T, T), T, T*, int);
		
		template <typename TOutput, typename T1>
		TOutput fold(TOutput(*func)(TOutput, T1), TOutput, T1*, int);
		
		template <typename TOutput, typename T1, typename T2>
		TOutput fold(TOutput(*func)(TOutput, T1, T2), TOutput, T1*, T2*, int);
		
		template <typename TOutput, typename T1, typename T2, typename T3>
		TOutput fold(TOutput(*func)(TOutput, T1, T2, T3), TOutput, T1*, T2*, T3*, int);
		
		template <typename TOutput, typename T1, typename T2, typename T3, typename T4>
		TOutput fold(TOutput(*func)(TOutput, T1, T2, T3, T4), TOutput, T1*, T2*, T3*, T4*, int);




		template <typename T>
		T fold(T(*func)(T, T), T x0, T* x, int n) {
			T res;

			res = x0;

			for (int i = 0; i < n; i++) {
				//
				res = func(res, x[i]);
			}

			return res;
		}

		template <typename TOutput, typename T1>
		TOutput fold(TOutput(*func)(TOutput, T1), TOutput r0, T1* x, int n) {
			TOutput res;

			res = r0;

			for (int i = 0; i < n; i++) {
				//
				res = func(res, x[i]);
			}

			return res;
		}

		template <typename TOutput, typename T1, typename T2>
		TOutput fold(TOutput(*func)(TOutput, T1, T2), TOutput r0, T1* x, T2* y, int n) {
			TOutput res;

			res = r0;

			for (int i = 0; i < n; i++) {
				//
				res = func(res, x[i], y[i]);
			}

			return res;
		}

		template <typename TOutput, typename T1, typename T2, typename T3>
		TOutput fold(TOutput(*func)(TOutput, T1, T2, T3), TOutput r0, T1* x, T2* y, T3* z, int n) {
			TOutput res;

			res = r0;

			for (int i = 0; i < n; i++) {
				//
				res = func(res, x[i], y[i], z[i]);
			}

			return res;
		}

		template <typename TOutput, typename T1, typename T2, typename T3, typename T4>
		TOutput fold(TOutput(*func)(TOutput, T1, T2, T3, T4), TOutput r0, T1* x1, T2* x2, T3* x3, T4* x4, int n) {
			TOutput res;

			res = r0;

			for (int i = 0; i < n; i++) {
				//
				res = func(res, x1[i], x2[i], x3[i], x4[i]);
			}

			return res;
		}






		//
	}
}