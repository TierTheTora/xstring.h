CC = gcc
CFLAGS = -Wall -Wextra -O2

BUILD_DIR = build
SOURCE_DIR = source

CFILES = $(wildcard $(SOURCE_DIR)/*.c)
OFILES = $(patsubst $(SOURCE_DIR)/%.c, $(BUILD_DIR)/%.o, $(CFILES))
LIBA = $(BUILD_DIR)/libxstring.a
LIBSO = $(BUILD_DIR)/libxstring.so

all: $(LIBA) $(LIBSO)

$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)


$(LIBSO): $(OFILES)
	$(CC) -shared -o $(LIBSO) $^

$(LIBA): $(OFILES)
	ar rcs $(LIBA) $^
clean:
	rm -rf $(BUILD_DIR)

