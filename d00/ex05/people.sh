#!/bin/hs


ldapsearch -Q uid='z*' | grep "cn:" | sed 's/cn://g' | sort -r -f