# add this to sound/usb/quirks-table.h with arch's abs

{
    USB_DEVICE(0x0499, 0x1509),
    .driver_info = (unsigned long) & (const struct snd_usb_audio_quirk) {
        /* .vendor_name = "Yamaha", */
        /* .product_name = "Steinberg UR44", */
        .ifnum = QUIRK_ANY_INTERFACE,
        .type = QUIRK_COMPOSITE,
        .data = (const struct snd_usb_audio_quirk[]) {
            {
                .ifnum = 1,
                .type = QUIRK_AUDIO_STANDARD_INTERFACE
            },
            {
                .ifnum = 2,
                .type = QUIRK_AUDIO_STANDARD_INTERFACE
            },
            {
                .ifnum = 3,
                .type = QUIRK_MIDI_YAMAHA
            },
            {
                .ifnum = 4,
                .type = QUIRK_IGNORE_INTERFACE
            },
            {
                .ifnum = -1
            }
        }
    }
},
