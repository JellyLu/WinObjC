//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#pragma once
#include "UIView.h"
class UITableViewCell :
    public UIView
{
private:
    const char *_reuseIdentifier;
    UIView *_contentView;
    UIView *_imageView, *_textLabel, *_detailTextLabel;
    bool _backgroundColorSet;
    int _selectionStyle;
    int _indentationLevel;
    float _indentationWidth;

public:
    UITableViewCell();
    virtual void Awaken();
    virtual void InitFromXIB(XIBObject *obj);
    virtual void ConvertStaticMappings(NIBWriter *writer, XIBObject *obj);

    ObjectConverter *Clone();
};

