// 函数名称: ?CPtoLocaleName@@YAPB_WH@Z
// 虚拟地址: 0x592dec
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t?CPtoLocaleName@@YAPB_WH@Z(int32_t arg1) __pure
{
    // 第一条实际指令: if (arg1 == 0x3a4)
    if (arg1 == 0x3a4)
        return u"ja-JP"
    
    if (arg1 == 0x3a8)
        return u"zh-CN"
    
    if (arg1 == 0x3b5)
        return u"ko-KR"
    
    if (arg1 == 0x3b6)
        return u"zh-TW"
    
    return 0
}
