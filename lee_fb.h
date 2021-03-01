
static struct platform_driver lee_fb_platform_driver = {
	.probe = lee_fb_probe,
	.remove = lee_fb_remove,
	.driver = {
		/*
			do not  need the name
			Because the driver matching table is used below
		*/
		//.name = "lee_fb",   
		.of_match_table = lee_fb_dt_ids,
	},
};

/*
	This macro expands to module_init、module_ exit
*/
module_platform_driver(lee_fb_platform_driver);
