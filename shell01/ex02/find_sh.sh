#!/bin/sh
find . -type f -name "*.sh" | xargs basename --suffix=".sh"