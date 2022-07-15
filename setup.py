import platform

from setuptools import Extension, setup

def get_ext_modules() -> list:
    """
    获取三方模块
    Linux和Windows需要编译封装接口
    Mac由于缺乏二进制库支持无法使用
    """

    if platform.system() == "Linux":
        extra_compile_flags = [
            "-std=c++17",
            "-O3",
            "-Wno-delete-incomplete",
            "-Wno-sign-compare",
        ]
        extra_link_args = ["-lstdc++"]
        runtime_library_dirs = ["$ORIGIN"]

    elif platform.system() == "Windows":
        extra_compile_flags = ["-O2", "-MT"]
        extra_link_args = []
        runtime_library_dirs = []

    else:
        return []

    vnusttd = Extension(
        name="vnpy_ust.api.vnusttd",
        sources=["vnpy_ust/api/vnust/vnusttd/vnusttd.cpp"],
        include_dirs=["vnpy_ust/api/include", "vnpy_ust/api/vnust"],
        library_dirs=["vnpy_ust/api/libs", "vnpy_ust/api"],
        libraries=["HSSecuTradeApi"],
        extra_compile_args=extra_compile_flags,
        extra_link_args=extra_link_args,
        runtime_library_dirs=runtime_library_dirs,
        language="cpp",
    )

    return [vnusttd]

    
setup(ext_modules=get_ext_modules())
