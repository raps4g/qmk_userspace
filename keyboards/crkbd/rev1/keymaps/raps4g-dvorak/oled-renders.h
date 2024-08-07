static void render_layer_base(void) {
    static const char layer_base[] PROGMEM = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xe0, 0x30, 0x18, 0x88, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8,
        0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0x88, 0x18, 0x30, 0xe0, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0x3f, 0x1f, 0x8f, 0xcf, 0xcf, 0x8f, 0x1f, 0x3f,
        0xff, 0xff, 0x7f, 0x3f, 0x3f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xc0, 0xc0, 0xf3, 0xf3, 0xf3, 0xf3, 0xc0, 0xc0,
        0xff, 0xe0, 0xc0, 0xcf, 0xcf, 0xe0, 0xc0, 0xcf, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x1f, 0x30, 0x60, 0x47, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f,
        0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x47, 0x60, 0x30, 0x1f, 0x00, 0x00,
        0x00, 0x00, 0xfc, 0x06, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x81, 0x81, 0x01, 0x01,
        0x01, 0x01, 0x81, 0x81, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x06, 0xfc, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x9e, 0x9e, 0x01, 0x01, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x01, 0x9e, 0x9e, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x18, 0x18, 0x00, 0x00,
        0x00, 0x00, 0x18, 0x18, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x83, 0xc6, 0x6c, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28,
        0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x6c, 0xc6, 0x83, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00,
        0x00, 0xfe, 0xfe, 0x06, 0x06, 0xfe, 0xfc, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x7f, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x7f, 0x00, 0x00,
        0x00, 0x00, 0xe0, 0x30, 0x19, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09,
        0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x19, 0x30, 0xe0, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
        0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1c, 0x08,
        0x00, 0x00, 0x3e, 0x22, 0x22, 0x22, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x1f, 0x30, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
        0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x30, 0x1f, 0x00, 0x00
    };
    oled_write_raw_P(layer_base, sizeof(layer_base));
}

static void render_layer_sym(void) {
    static const char layer_sym[] PROGMEM = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xe0, 0x30, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
        0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x18, 0x30, 0xe0, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0x70, 0x30, 0x30, 0x70, 0xe0, 0xc0,
        0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x0c, 0x0c, 0x0c, 0x0c, 0x3f, 0x3f,
        0x00, 0x1f, 0x3f, 0x30, 0x30, 0x1f, 0x3f, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x1f, 0x30, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
        0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x30, 0x1f, 0x00, 0x00,
        0x00, 0x00, 0xfc, 0x06, 0x03, 0xf1, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0x79, 0x79, 0xf9, 0xf9,
        0xf9, 0xf9, 0x79, 0x79, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf1, 0x03, 0x06, 0xfc, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0x9f, 0x9f, 0x61, 0x61, 0xfe, 0xfe, 0xff, 0xff,
        0xff, 0xff, 0xfe, 0xfe, 0x61, 0x61, 0x9f, 0x9f, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xf8, 0xe7, 0xe7, 0xff, 0xff,
        0xff, 0xff, 0xe7, 0xe7, 0xf8, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x83, 0xc6, 0x6c, 0x28, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
        0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x28, 0x6c, 0xc6, 0x83, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00,
        0x00, 0xfe, 0xfe, 0x06, 0x06, 0xfe, 0xfc, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x7f, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x7f, 0x00, 0x00,
        0x00, 0x00, 0xe0, 0x30, 0x19, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09,
        0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x19, 0x30, 0xe0, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
        0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1c, 0x08,
        0x00, 0x00, 0x3e, 0x22, 0x22, 0x22, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x1f, 0x30, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
        0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x30, 0x1f, 0x00, 0x00
    };
    oled_write_raw_P(layer_sym, sizeof(layer_sym));
}

static void render_layer_fn(void) {
    static const char layer_fn[] PROGMEM = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xe0, 0x30, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
        0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x18, 0x30, 0xe0, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0x70, 0x30, 0x30, 0x70, 0xe0, 0xc0,
        0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x0c, 0x0c, 0x0c, 0x0c, 0x3f, 0x3f,
        0x00, 0x1f, 0x3f, 0x30, 0x30, 0x1f, 0x3f, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x1f, 0x30, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
        0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x30, 0x1f, 0x00, 0x00,
        0x00, 0x00, 0xfc, 0x06, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x81, 0x81, 0x01, 0x01,
        0x01, 0x01, 0x81, 0x81, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x06, 0xfc, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x9e, 0x9e, 0x01, 0x01, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x01, 0x9e, 0x9e, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x18, 0x18, 0x00, 0x00,
        0x00, 0x00, 0x18, 0x18, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x83, 0xc6, 0x6c, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28,
        0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x6c, 0xc6, 0x83, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0xf3, 0xf3, 0xf3, 0xf3, 0xff, 0xff,
        0xff, 0x01, 0x01, 0xf9, 0xf9, 0x01, 0x03, 0xff, 0x7f, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x7f, 0xc0, 0x80, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,
        0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x80, 0xc0, 0x7f, 0x00, 0x00,
        0x00, 0x00, 0xe0, 0x30, 0x19, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09,
        0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x19, 0x30, 0xe0, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
        0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1c, 0x08,
        0x00, 0x00, 0x3e, 0x22, 0x22, 0x22, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x1f, 0x30, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
        0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x30, 0x1f, 0x00, 0x00
    };
    oled_write_raw_P(layer_fn, sizeof(layer_fn));
}

//static void render_layer_lat(void) {
//    static const char layer_lat[] PROGMEM = {
//        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//        0x00, 0x00, 0xe0, 0x30, 0x18, 0x88, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8,
//        0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0xc8, 0x88, 0x18, 0x30, 0xe0, 0x00, 0x00,
//        0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0x3f, 0x1f, 0x8f, 0xcf, 0xc9, 0x88, 0x1c, 0x3f,
//        0xff, 0x5f, 0x6f, 0x4f, 0x5f, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00,
//        0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xc0, 0xc0, 0xf3, 0xf3, 0xf3, 0xf3, 0xc0, 0xc0,
//        0xff, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0, 0xc0, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00,
//        0x00, 0x00, 0x1f, 0x30, 0x60, 0x47, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f,
//        0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x47, 0x60, 0x30, 0x1f, 0x00, 0x00,
//        0x00, 0x00, 0xfc, 0x06, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x81, 0x81, 0x01, 0x01,
//        0x01, 0x01, 0x81, 0x81, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x06, 0xfc, 0x00, 0x00,
//        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x9e, 0x9e, 0x01, 0x01, 0x00, 0x00,
//        0x00, 0x00, 0x01, 0x01, 0x9e, 0x9e, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
//        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x18, 0x18, 0x00, 0x00,
//        0x00, 0x00, 0x18, 0x18, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
//        0x00, 0x00, 0x83, 0xc6, 0x6c, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28,
//        0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x6c, 0xc6, 0x83, 0x00, 0x00,
//        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00,
//        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
//        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00,
//        0x00, 0xfe, 0xfe, 0x06, 0x06, 0xfe, 0xfc, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
//        0x00, 0x00, 0x7f, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x7f, 0x00, 0x00,
//        0x00, 0x00, 0xe0, 0x30, 0x19, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09,
//        0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x19, 0x30, 0xe0, 0x00, 0x00,
//        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
//        0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
//        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1c, 0x08,
//        0x00, 0x00, 0x3e, 0x22, 0x22, 0x22, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
//        0x00, 0x00, 0x1f, 0x30, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
//        0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x30, 0x1f, 0x00, 0x00
//    };
//    oled_write_raw_P(layer_lat, sizeof(layer_lat));
//}

static void render_layer_macros(void) {
    static const char layer_macros[] PROGMEM = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xe0, 0x30, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
        0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x18, 0x30, 0xe0, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0x70, 0x30, 0x30, 0x70, 0xe0, 0xc0,
        0x00, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x0c, 0x0c, 0x0c, 0x0c, 0x3f, 0x3f,
        0x00, 0x1f, 0x3f, 0x30, 0x30, 0x1f, 0x3f, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x1f, 0x30, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
        0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x30, 0x1f, 0x00, 0x00,
        0x00, 0x00, 0xfc, 0x06, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x81, 0x81, 0x01, 0x01,
        0x01, 0x01, 0x81, 0x81, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x06, 0xfc, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x9e, 0x9e, 0x01, 0x01, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x01, 0x9e, 0x9e, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x18, 0x18, 0x00, 0x00,
        0x00, 0x00, 0x18, 0x18, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x83, 0xc6, 0x6c, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28,
        0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x6c, 0xc6, 0x83, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00,
        0x00, 0xfe, 0xfe, 0x06, 0x06, 0xfe, 0xfc, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x7f, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x7f, 0x00, 0x00,
        0x00, 0x00, 0xe0, 0x30, 0x19, 0x89, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9,
        0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0x89, 0x19, 0x30, 0xe0, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
        0x07, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xe3, 0xf7,
        0xff, 0xff, 0xc1, 0xdd, 0xdd, 0xdd, 0xc1, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x00, 0x00, 0x1f, 0x30, 0x60, 0x47, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f,
        0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x47, 0x60, 0x30, 0x1f, 0x00, 0x00
    };
    oled_write_raw_P(layer_macros, sizeof(layer_macros));
}

static void render_caps(void) {
    led_t led_state = host_keyboard_led_state();
    static const char caps[] PROGMEM = {
        0x00, 0x00, 0x3e, 0x7f, 0x7f, 0x7f, 0x63, 0x5d, 0x5d, 0x5d, 0x7f, 0x43, 0x6d, 0x6d, 0x43, 0x7f,
        0x41, 0x6d, 0x6d, 0x73, 0x7f, 0x5b, 0x55, 0x55, 0x6d, 0x7f, 0x7f, 0x7f, 0x7f, 0x3e, 0x00, 0x00
    };
    if (led_state.caps_lock) {
        oled_write_raw_P(caps, sizeof(caps));
    }
}

#define FRAME_DURATION 750

uint32_t timer = 0;
uint8_t current_frame = 0;

static void render_matecito(void) {
    static const char matecito_0 [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x10, 0x8c, 0x62, 0x19, 0x07, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xf0, 0x1c, 0x03, 0xf8, 0x06, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0xf0, 0x08, 0x04, 0x14, 0x14, 0x3a, 0x3a, 0x3a, 0x3a, 0x3a, 0x3a, 0x3a, 0x3a, 0x32, 0x32,
0x32, 0x22, 0x22, 0x22, 0x3f, 0x20, 0x20, 0x3f, 0x22, 0x22, 0x12, 0x06, 0x04, 0x08, 0xf0, 0x00,
0x00, 0xf0, 0xfd, 0x3f, 0x1e, 0x0c, 0x8c, 0xcc, 0xec, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc,
0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfd, 0xf0, 0x00,
0x00, 0x1f, 0xff, 0xe0, 0x80, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x00,
0x00, 0x00, 0x01, 0x07, 0x1f, 0x3f, 0x77, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x0f, 0x03, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x04, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f,
0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x04, 0x00
    };

    static const char matecito_1 [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x10, 0xc8, 0x38, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0x1c, 0xc3, 0x30, 0x0c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x80, 0x40, 0x20, 0xa0, 0xa0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0x90, 0x90,
0x90, 0x10, 0x10, 0x10, 0xff, 0x00, 0x00, 0xff, 0x10, 0x10, 0x90, 0x30, 0x20, 0x40, 0x80, 0x00,
0x00, 0x87, 0xe8, 0xf8, 0xf0, 0x60, 0x61, 0x61, 0x61, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1,
0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xe1, 0xf1, 0xf0, 0xf0, 0xf0, 0xe8, 0x87, 0x00,
0x00, 0xff, 0xff, 0x01, 0x00, 0xf0, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
0x00, 0x00, 0x0f, 0x3f, 0xfc, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x1f, 0x01, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,
0x00, 0x04, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f,
0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x04
    };

    const char* matecito_animation [] = {
        matecito_0,
        matecito_1
    };

    uint16_t frame_sizes[2] = {
        sizeof(matecito_0),
        sizeof(matecito_1)
    };

    if (timer_elapsed(timer) > FRAME_DURATION) {
        timer = timer_read();
        current_frame = (current_frame + 1) % (sizeof(matecito_animation) / sizeof(matecito_animation[0]));
        oled_write_raw_P(matecito_animation[current_frame], frame_sizes[current_frame]);
    }
}
