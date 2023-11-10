#!/bin/bash

if [[ `ibus engine` == "Bamboo" ]]; then
	ibus engine 'BambooUs'
else
	ibus engine 'Bamboo'
fi
