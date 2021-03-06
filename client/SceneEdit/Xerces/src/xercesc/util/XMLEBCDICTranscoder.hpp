/*
 * Copyright 1999-2000,2004 The Apache Software Foundation.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef XMLEBCDICTRANSCODER_HPP
#define XMLEBCDICTRANSCODER_HPP

#include <../../../SceneEdit/Xerces/src/xercesc/util/XercesDefs.hpp>
#include <../../../SceneEdit/Xerces/src/xercesc/util/XML256TableTranscoder.hpp>

XERCES_CPP_NAMESPACE_BEGIN

//
//  This class provides an implementation of the XMLTranscoder interface
//  for a simple EBCDIC-US transcoder. The parser does some encodings
//  intrinsically without depending upon external transcoding services.
//  To make everything more orthagonal, we implement these internal
//  transcoders using the same transcoder abstraction as the pluggable
//  transcoding services do.
//
//  EBCDIC-US is the same as IBM037, CP37, EBCDIC-CP-US, etc...
//
class XMLUTIL_EXPORT XMLEBCDICTranscoder : public XML256TableTranscoder
{
public :
    // -----------------------------------------------------------------------
    //  Public, static methods
    // -----------------------------------------------------------------------
    static XMLCh xlatThisOne(const XMLByte toXlat);


    // -----------------------------------------------------------------------
    //  Public constructors and destructor
    // -----------------------------------------------------------------------
    XMLEBCDICTranscoder
    (
        const   XMLCh* const    encodingName
        , const unsigned int    blockSize
        , MemoryManager* const manager = XMLPlatformUtils::fgMemoryManager
    );

    virtual ~XMLEBCDICTranscoder();


private :
    // -----------------------------------------------------------------------
    //  Unimplemented constructors and operators
    // -----------------------------------------------------------------------
    XMLEBCDICTranscoder();
    XMLEBCDICTranscoder(const XMLEBCDICTranscoder&);
    XMLEBCDICTranscoder& operator=(const XMLEBCDICTranscoder&);
};

XERCES_CPP_NAMESPACE_END

#endif
