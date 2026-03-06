// 函数名称: ?__scrt_uninitialize_thread_safe_statics@@YAXXZ
// 虚拟地址: 0x577889
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL?__scrt_uninitialize_thread_safe_statics@@YAXXZ()
{
    // 第一条实际指令: DeleteCriticalSection(&data_6cf33c)
    DeleteCriticalSection(&data_6cf33c)
    BOOL hObject = data_6cf358
    
    if (hObject == 0)
        return hObject
    
    return CloseHandle(hObject)
}
