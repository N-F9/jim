# ----------------------------
# Makefile Options
# ----------------------------

NAME = JIM
DESCRIPTION = "Various math programs"
COMPRESSED = NO
ARCHIVED = YES

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

# ----------------------------

include $(shell cedev-config --makefile)
