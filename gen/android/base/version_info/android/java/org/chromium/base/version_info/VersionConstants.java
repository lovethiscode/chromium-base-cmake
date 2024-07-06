// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.base.version_info;

// Constants shared by Android Chrome and WebView. Chrome specific constants are
// in ChromeVersionConstants.
public class VersionConstants {
    public static final String PRODUCT_VERSION = "@MAJOR@.@MINOR@.@BUILD@.@PATCH@";
    @SuppressWarnings({"ComplexBooleanConstant", "IdentityBinaryExpression"})
    public static final boolean IS_OFFICIAL_BUILD = false;

    public static final int PRODUCT_MAJOR_VERSION = 1;
    public static final int PRODUCT_BUILD_VERSION = 1;

    public static final int CHANNEL = 1;
}