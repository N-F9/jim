# ----------------------------
# Makefile Options
# ----------------------------

NAME = JIM
DESCRIPTION = "Various math programs"
ICON = icon.png
COMPRESSED = NO
ARCHIVED = YES

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

# ----------------------------

include $(shell cedev-config --makefile)
