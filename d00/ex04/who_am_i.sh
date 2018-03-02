#!/bin/hs



ldapwhoami -Q | sed 's/dn://g'
