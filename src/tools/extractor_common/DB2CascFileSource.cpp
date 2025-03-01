/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "DB2CascFileSource.h"
#include "StringFormat.h"
#include <CascLib.h>

DB2CascFileSource::DB2CascFileSource(std::shared_ptr<CASC::Storage const> storage, uint32 fileDataId, bool printErrors /*= true */)
{
    _fileHandle.reset(storage->OpenFile(fileDataId, CASC_LOCALE_NONE, printErrors, true));
    _fileName = Trinity::StringFormat("FileDataId: %u", fileDataId);
}

bool DB2CascFileSource::IsOpen() const
{
    return _fileHandle != nullptr;
}

bool DB2CascFileSource::Read(void* buffer, std::size_t numBytes)
{
    uint32 bytesRead = 0;
    return _fileHandle->ReadFile(buffer, numBytes, &bytesRead) && numBytes == bytesRead;
}

int64 DB2CascFileSource::GetPosition() const
{
    return _fileHandle->GetPointer();
}

int64 DB2CascFileSource::GetFileSize() const
{
    return _fileHandle->GetSize();
}

CASC::File* DB2CascFileSource::GetNativeHandle() const
{
    return _fileHandle.get();
}

char const* DB2CascFileSource::GetFileName() const
{
    return _fileName.c_str();
}
