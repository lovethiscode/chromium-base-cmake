// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.base.version_info;

// Constants shared by Android Chrome and WebView. Chrome specific constants are
// in ChromeVersionConstants.
public class Channel {
    public static final int DEFAULT = 0;
    public static final int CANARY = 1;
    public static final int DEV = 2;
    public static final int BETA = 3;
    public static final int STABLE = 4;
}
