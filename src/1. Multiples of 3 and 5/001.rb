﻿puts (1 ... 1000).to_a.find_all {|i| i % 3 == 0 or i % 5 == 0} .inject(:+)