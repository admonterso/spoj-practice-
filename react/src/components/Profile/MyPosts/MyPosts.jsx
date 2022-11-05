import React from "react";
import s from "./MyPosts.module.css";
import Post from "./Posts/Post";
export default function MyPosts() {
  return (
    <div>
      mypost
      <div>new post</div>
      <Post message="hello" likes="13" />
      <Post message="good" likes="10" />
    </div>
  );
}
