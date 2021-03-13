
struct lee_fb_info {
	struct fb_info *info;
};

static int lee_fb_probe(struct platform_device *pdev)
{
	int ret = -ENOMEM;
	struct fb_info *lee_info;
	struct lee_fb_info *lfi;
	struct device *dev = &pdev->dev;
	/*
		NULL : Do not build device hierarchy
	*/
	lee_info = framebuffer_alloc(sizeof(struct lee_fb_info), NULL);
	if (!le_info)
		goto f_alloc_failure;

	

	return 0;

f_alloc_failure:
	return ret;
}

static const struct dev_pm_ops lee_fb_self_pm_ops = {

};

static struct platform_driver lee_fb_platform_driver = {
	.remove = lee_fb_remove,
	.driver = {
		/*
			do not  need the name
			Because the driver matching table is used below
		*/
		//.name = "lee_fb",   
		.of_match_table = lee_fb_dt_ids,
		.pm = &lee_fb_self_pm_ops,
	},
};

module_platform_driver_probe(lee_fb_platform_driver, lee_fb_probe);
