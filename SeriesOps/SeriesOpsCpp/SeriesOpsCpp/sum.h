#pragma once
#include "stdafx.h"
#include "SeriesOpsCpp.h"
#include "opt.h"
#include "fold.h"

namespace sms {
	//
	namespace seriesops {
		//


		template <typename T> T sum(T, T*, int);
		template <typename T> T sum(T, T*, int, int);
		



		///<summary>Sum over an array of values, corrected for rounding error</summary>
		///<param name="T">Value type</param>
		///<param name="x0">Initial value</param>
		///<param name="x">Summand array</param>
		///<param name="n">Size of summand array, 1-indexed</param>
		///<remarks>Uses Neumaier's modification of Kahan's method to correct for rounding error</remarks>
		template <typename T> T sum(T x0, T* x, int n) {
			T res;
			T c;
			T y;
			T q;

			res = x0;
			c = x0 - x0;

			for (int i = 0; i < n; i++) {
				// Kahan...
				// y = x[i] - c;
				// q = res + y;
				// c = (q - res) - y;
				// res = q;

				// Neumaier...
				q = res + x[i];
				if (abs(res) >= abs(x[i])) {
					c += (res - q) + x[i];
				}
				else {
					c += (x[i] - q) + res;
				}
				res = q;
			}
			res += c;

			return res;
		}

		///<summary>Sum over a subset of an array of values, corrected for rounding error</summary>
		///<param name="T">Value type</param>
		///<param name="x0">Initial value</param>
		///<param name="x">Summand array</param>
		///<param name="ni">Starting position, 1-indexed</param>
		///<param name="nf">Ending position, 1-indexed</param>
		///<remarks>Uses Neumaier's modification of Kahan's method to correct for rounding error</remarks>
		template <typename T> T sum(T x0, T* x, int ni, int nf) {
			T res;
			T c;
			T y;
			T q;
			int n0;
			int n1;

			// sort bounding indices
			n0 = min(ni, nf);
			n1 = max(ni, nf);

			// set initial values
			res = x0;
			c = x0 - x0;

			for (int i = n0 - 1; i < nf; i++) {
				// Kahan...
				// y = x[i] - c;
				// q = res + y;
				// c = (q - res) - y;
				// res = q;

				// Neumaier...
				q = res + x[i];
				if (abs(res) >= abs(x[i])) {
					c += (res - q) + x[i];
				}
				else {
					c += (x[i] - q) + res;
				}
				res = q;
			}
			res += c;

			// set sign from order of bounding indices
			res = ((ni) > (nf)) ? (-res) : (res);

			return res;
		}



		




	}
}